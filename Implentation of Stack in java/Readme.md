# 📦 Integer Stack in Java

This project implements a **stack** data structure using a fixed-size integer array in Java. It supports core stack operations as well as advanced utilities like sorting, reversing, duplication removal, conversion, and more.

---

## 📂 Project Structure

- `Stack`: Main class implementing all stack operations.
- `Main`: Example usage and testing.

---

## ✅ Features

### 🧱 Stack Basics
- `push(int data)` - Add an element on top of the stack.
- `pop()` - Remove and return the top element.
- `peek()` - Return the top element without removing it.
- `isEmpty()` - Check if the stack is empty.
- `isFull()` - Check if the stack is full.

## 🚀 Example Usage
```java
Stack stack = new Stack(5);
stack.push(10);
stack.push(20);
System.out.println(stack.pop());  // 20
System.out.println(stack.peek()); // 10
```

---

### 📊 Statistics
- `sum()` - Return the sum of all elements.
- `average()` - Return the average value.
- `max()` - Return the maximum value.
- `min()` - Return the minimum value.
- `size()` - Return the current number of elements.

---

### 🧹 Utilities
- `removeDuplicates()` - Remove duplicate values.
- `reverse()` - Reverse the stack in-place.
- `sort()` - Sort the stack in ascending order.
- `swap(int data1, int data2)` - Swap two values in the stack (if both exist).

## 🚀 Example Usage
```java
stack.push(3);
stack.push(1);
stack.push(3);
stack.removeDuplicates(); // removes duplicate 3
stack.reverse();          // reverse the stack
stack.sort();             // sort it
stack.swap(1, 3);         // swap values 1 and 3
```

---

### 🔁 Conversion
- `toArray()` - Return a copy of the stack as an array.
- `toStack(int[] array)` - Create a new stack from an array.

---

### 🧪 Extras
- `equals(Stack other)` - Check if two stacks are equal.
- `clone()` - Return a deep copy of the stack.
- `concat(Stack other)` - Concatenate another stack to this one.

---

## 🧱 Algorithm Steps

1. Create an array to hold elements.
2. Track the top index.
3. Implement operations using simple array logic.
4. Handle edge cases (e.g. empty/full stack).
5. Add utility methods (sort, reverse, remove duplicates).

---

## 📂 Requirements

- Java 8 or higher
- Basic understanding of arrays and stack logic

---

## 🧾 Notes

- This stack uses fixed size arrays.
- It is limited to `INTEGER` values only (not generic).
- For simplicity, all operations are iterative (not recursive).
- Useful for educational purposes and basic stack applications.

---

## 🔐 License

This project is licensed under the `MIT` License. Free to use, modify, and distribute.

---

## 📬 Contact

For feedback or contributions:

- GitHub: [abdelhalim-yasser](https://github.com/abdelhalim-yasser)
- LinkedIn: [abdelhalim-yasser](https://www.linkedin.com/in/abdelhalim-yasser)

---

# Happy Coding! 🚀
