Movie Ticket Booking System

Project Overview

The Movie Ticket Booking System is a console-based application developed in C as a Data Structures project.

The system uses an array to store available movies and show times and a queue to manage customer ticket booking requests. Booking requests are processed according to the FIFO (First In, First Out) principle.

---

Problem Statement

Design and implement a console-based Movie Ticket Booking System using arrays and queues.

The system should:

- Store and display available movies.
- Store and display available show times.
- Allow customers to book movie tickets.
- Maintain booking requests using a queue.
- Process customers in first-come-first-served order.
- Provide a menu-driven interface.

---

Objectives

- To understand and implement arrays in C.
- To implement a queue using an array.
- To understand the FIFO principle.
- To apply data structures to a real-world ticket booking application.
- To develop a menu-driven console application.

---

Data Structures Used

1. Array

Arrays are used to store the available movie names and show times.

Movies:

1. Avatar
2. Avengers
3. Leo
4. Interstellar
5. KGF

Show Times:

1. 10:00 AM
2. 1:00 PM
3. 4:00 PM
4. 7:00 PM

2. Queue

A queue is used to store customer booking requests.

The queue follows the FIFO (First In, First Out) principle.

For example:

FRONT                         REAR
  ↓                             ↓
[Ammu] → [Rahul] → [Anu]

If Ammu books first, Ammu's request is processed first.

---

Booking Information

Each booking request stores:

- Customer name
- Movie choice
- Show time
- Number of tickets

The booking information is stored using the "struct Booking" structure.

---

Available Movies

No.| Movie
1| Avatar
2| Avengers
3| Leo
4| Interstellar
5| KGF

Available Show Times

No.| Show Time
1| 10:00 AM
2| 1:00 PM
3| 4:00 PM
4| 7:00 PM

---

Menu

The system provides the following menu:

=====================================
     MOVIE TICKET BOOKING SYSTEM
=====================================

1. View Available Movies
2. Book Tickets
3. Process Next Booking
4. Display Waiting Queue
5. Exit

Option 1 — View Available Movies

Displays all available movies and show times.

Option 2 — Book Tickets

Accepts:

- Customer name
- Movie choice
- Show time choice
- Number of tickets

The booking request is then added to the queue.

Option 3 — Process Next Booking

Processes the customer at the front of the queue.

This follows the FIFO principle.

Option 4 — Display Waiting Queue

Displays all customers currently waiting in the queue along with their selected movie, show time, and number of tickets.

Option 5 — Exit

Terminates the program.

---

Main Functions

"displayMovies()"

Displays the available movies and show times.

"bookTicket()"

Collects customer booking details and adds the booking request to the queue.

"processBooking()"

Processes the booking request at the front of the queue and then moves the "front" position to the next customer.

"displayQueue()"

Displays all current booking requests in the queue.

---

Queue Implementation

The queue is implemented using an array:

struct Booking queue[MAX_QUEUE];

The queue uses two variables:

int front = -1;
int rear = -1;

- "front" points to the first booking request.
- "rear" points to the last booking request.

When a new booking is added, it is inserted at the "rear".

When a booking is processed, it is removed from the "front".

Therefore, the system follows:

First Customer → Processed First

which demonstrates FIFO.

---

Example Queue Operation

Suppose three customers make booking requests:

Ammu
Rahul
Anu

The queue becomes:

FRONT
  ↓
[Ammu] → [Rahul] → [Anu]
                         ↑
                        REAR

When the next booking is processed:

Ammu

is processed first.

The queue then becomes:

FRONT
  ↓
[Rahul] → [Anu]
             ↑
            REAR

This demonstrates the FIFO principle.

---

Queue Capacity

The maximum queue size in the program is:

#define MAX_QUEUE 10

Therefore, the system can hold up to 10 booking requests at a time.

---

Technologies Used

- Programming Language: C
- Data Structures: Array and Queue
- Compiler: GCC
- Development Environment: Visual Studio Code
- Application Type: Console-based

---

How to Compile

Open the terminal in the project directory and compile the program using:

gcc movie_ticket_booking.c -o movie

How to Run

Run the compiled program using:

./movie

---

Sample Execution

=====================================
     MOVIE TICKET BOOKING SYSTEM
=====================================

1. View Available Movies
2. Book Tickets
3. Process Next Booking
4. Display Waiting Queue
5. Exit

Enter your choice: 2

Enter customer name: Ammu

Available Movies:
1. Avatar
2. Avengers
3. Leo
4. Interstellar
5. KGF

Enter movie choice: 1

Available Show Times:
1. 10:00 AM
2. 1:00 PM
3. 4:00 PM
4. 7:00 PM

Enter show time choice: 1
Enter number of tickets: 2

Booking request added to queue successfully!

---

Project Structure

Movie-Ticket-Booking-System/
│
└── movie_ticket_booking.c

---

Conclusion

The Movie Ticket Booking System demonstrates the practical application of fundamental data structures in C.

An array is used to store movie and show-time information, while a queue is used to manage customer booking requests. The queue processes customers according to the FIFO (First In, First Out) principle, ensuring that customers are handled in the order in which their booking requests are received.
