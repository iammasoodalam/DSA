# Data Structures and Algorithms
In **computer science**, a **data structure** is a data organization, management, and storage format that is usually chosen for efficient access to data. More precisely, a **data structure** is a collection of data values, the relationships among them, and the **functions** or **operations** that can be applied to the data, i.e., it is an algebraic structure about data.

## Introduction
In this repository I have written some programs to demonstrate the Algorithms to *traverse a list*, *insert data at the beginning*, *insert data at the end*, or *at any position* using concepts of **Arrays**, **Linked List**, **Doubly Linked list** etc.

## Arrays
In computer science, an array is a data structure consisting of a collection of elements (values or variables), of **same memory size**, each identified by at least one array *index* or *key*. An array is stored such that the position of each element can be computed from its index tuple by a mathematical formula. The simplest type of data structure is a **linear array**, also called **one-dimensional array**.
![representation of array](/assets/img/array.png)

## Linked Lists

### Linear Linked List
A linked list is a linear data structure in which the elements are *not stored* at *contiguous memory locations*. Instead, each element in a linked list consists of a data field and a reference (link) to the next node in the list. Linked lists are widely used in computer science and programming due to their **flexibility** and **efficiency** in certain scenarios.
```c
// a linked list node
struct Node {
    int data;
    struct Node* next;
};
```
![An Image representation of Linked list](/assets/img/Linkedlist.png)

### Doubly Linked List
In computer science, a doubly linked list is a linked data structure that consists of a set of **sequentially linked records** called **nodes**. Each node contains three fields: two link fields (references to the previous and to the next node in the sequence of nodes) and one data field. The beginning and ending nodes' previous and next links, respectively, point to some kind of terminator, typically a sentinel node or null, to facilitate traversal of the list. If there is only one sentinel node, then the list is circularly linked via the sentinel node. It can be conceptualized as two singly linked lists formed from the same data items, but in opposite sequential orders.

```c
// a doubly linked list node
struct Node {
    int data;
    struct Node *next;
    struct Node *previous;
}
```
![Image representation of Doubly Linked List](/assets/img/doubly-linked-list.png)