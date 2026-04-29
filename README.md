# Circular Queue in C

## Overview

This project implements a **Circular Queue** using a fixed-size array in C.
It follows the **FIFO (First In, First Out)** principle and uses circular indexing to efficiently reuse memory.

---

## Structure

```c
typedef struct {
    char buffer[SIZE];
    int frontIndex;
    int rearIndex;
    int currentSize;
} CircularQueue;
```

---

## Main Operations

* `initialize()` → Initialize the queue
* `isQueueEmpty()` → Check if empty
* `isQueueFull()` → Check if full
* `push()` → Insert element (enqueue)
* `pop()` → Remove element (dequeue)

---

## How It Works

1. User inputs a name
2. `"CE-ESY"` is appended
3. Characters are inserted into the queue
4. They are removed and printed in order

---

## Key Idea

Circular behavior is achieved using:

```c
(index + 1) % SIZE
```

---

## Compile & Run

```bash
gcc main.c -o queue
./queue
```

---

## Notes

* Fixed size queue
* Works with characters
* Can be extended for other data types
