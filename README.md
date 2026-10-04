Movie Ticket Booking System

1. Project Overview

The Movie Ticket Booking System is a console-based application developed in C using Arrays and Queues.

The system allows users to view available movies and show times, book movie tickets, and manage customers waiting for ticket booking. A queue is used to process booking requests according to the FIFO (First In, First Out) principle.

---

2. Problem Statement

Design and implement a console-based Movie Ticket Booking System using arrays and queues.

- Use an array to store and display available movies and show times.
- Use a queue to manage ticket booking requests.
- Process booking requests in First-Come-First-Served (FIFO) order.
- Allow users to view movies, book tickets, and manage the waiting queue.
- Implement the system using a menu-driven approach.

---

3. Objectives

- To implement arrays in a real-world application.
- To implement a queue using an array.
- To understand the FIFO principle.
- To manage movie ticket booking requests efficiently.
- To develop a menu-driven C program.

---

4. Data Structures Used

Array

Arrays are used to store:

- Movie names
- Available show times
- Queue elements

Queue

A queue is used to store customer booking requests.

The queue follows:

FIFO – First In, First Out

The customer who enters the queue first is processed first.

Example:

FRONT
  ↓
[Ammu] → [Rahul] → [Anu]
                         ↑
                        REAR

---

5. Available Movies

No.| Movie
1| Avatar
2| Avengers
3| Leo
4| Interstellar
5| KGF

6. Available Show Times

No.| Show Time
1| 10:00 AM
2| 1:00 PM
3| 4:00 PM
4| 7:00 PM

---

7. Main Features

1. View available movies and show times.
2. Book movie tickets.
3. Add booking requests to the queue.
4. Display customers waiting in the queue.
5. Process the next booking using FIFO.
6. Exit the system.

---

8. Menu

=====================================
     MOVIE TICKET BOOKING SYSTEM
=====================================

1. View Available Movies
2. Book Tickets
3. Process Next Booking
4. Display Waiting Queue
5. Exit

---

9. Program Functions

"displayMovies()"

Displays the available movies and show times.

"bookTicket()"

Accepts customer details and adds the booking request to the queue.

"processBooking()"

Processes the first customer in the queue according to FIFO.

"displayQueue()"

Displays all customers currently waiting in the booking queue.

---

10. Algorithm

Booking a Ticket

1. Check whether the queue is full.
2. Read customer name.
3. Display available movies.
4. Select a movie.
5. Select a show time.
6. Enter the number of tickets.
7. Insert the booking request into the queue.
8. Display confirmation.

Processing a Booking

1. Check whether the queue is empty.
2. Select the customer at the front.
3. Display the booking details.
4. Process the booking.
5. Move the front pointer to the next customer.
6. If the queue becomes empty, reset the queue.

---

11. Time Complexity

Operation| Time Complexity
Display Movies| O(n)
Add Booking| O(1)
Process Booking| O(1)
Display Queue| O(n)

Here, "n" represents the number of elements.

---

12. Technologies Used

- Programming Language: C
- Data Structures: Array, Queue
- IDE: Visual Studio Code
- Compiler: GCC
- Platform: Console/Terminal

---

13. How to Run

Compile

gcc movie_ticket_booking.c -o movie

Run

./movie

---

14. Sample Queue Operation

Suppose three customers make booking requests:

Ammu → Rahul → Anu

The queue stores them as:

FRONT
  ↓
[Ammu] → [Rahul] → [Anu]
                         ↑
                        REAR

When bookings are processed:

Ammu → Rahul → Anu

This demonstrates the FIFO principle.

---

15. Conclusion

The Movie Ticket Booking System demonstrates the practical use of arrays and queues in a real-world application. Arrays are used to store movie and show-time information, while the queue manages booking requests in First-Come-First-Served order.

This project helps demonstrate the importance and practical application of fundamental data structures in C.
