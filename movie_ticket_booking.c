#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 5
#define MAX_QUEUE 10

struct Movie {
    char name[50];
};

struct Booking {
    char customerName[50];
    int movieChoice;
    int showTime;
    int tickets;
};

struct Movie movies[MAX_MOVIES] = {
    {"Avatar"},
    {"Avengers"},
    {"Leo"},
    {"Interstellar"},
    {"KGF"}
};

char showTimes[4][20] = {
    "10:00 AM",
    "1:00 PM",
    "4:00 PM",
    "7:00 PM"
};

struct Booking queue[MAX_QUEUE];

int front = -1;
int rear = -1;

void displayMovies() {
    int i;

    printf("\n===== AVAILABLE MOVIES =====\n");

    for (i = 0; i < MAX_MOVIES; i++) {
        printf("%d. %s\n", i + 1, movies[i].name);
    }

    printf("\n===== AVAILABLE SHOW TIMES =====\n");

    for (i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, showTimes[i]);
    }
}

void bookTicket() {
    struct Booking b;

    if (rear == MAX_QUEUE - 1) {
        printf("\nQueue is full! Cannot accept more bookings.\n");
        return;
    }

    printf("\nEnter customer name: ");
    scanf(" %[^\n]", b.customerName);

    printf("\nAvailable Movies:\n");

    for (int i = 0; i < MAX_MOVIES; i++) {
        printf("%d. %s\n", i + 1, movies[i].name);
    }

    printf("Enter movie choice: ");
    scanf("%d", &b.movieChoice);

    if (b.movieChoice < 1 || b.movieChoice > MAX_MOVIES) {
        printf("Invalid movie choice!\n");
        return;
    }

    printf("\nAvailable Show Times:\n");

    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, showTimes[i]);
    }

    printf("Enter show time choice: ");
    scanf("%d", &b.showTime);

    if (b.showTime < 1 || b.showTime > 4) {
        printf("Invalid show time choice!\n");
        return;
    }

    printf("Enter number of tickets: ");
    scanf("%d", &b.tickets);

    if (b.tickets <= 0) {
        printf("Invalid number of tickets!\n");
        return;
    }

    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = b;

    printf("\nBooking request added to queue successfully!\n");
}

void processBooking() {
    if (front == -1 || front > rear) {
        printf("\nNo booking requests in the queue.\n");
        return;
    }

    printf("\n===== PROCESSING BOOKING =====\n");

    printf("Customer Name : %s\n", queue[front].customerName);

    printf("Movie         : %s\n",
           movies[queue[front].movieChoice - 1].name);

    printf("Show Time     : %s\n",
           showTimes[queue[front].showTime - 1]);

    printf("Tickets       : %d\n", queue[front].tickets);

    printf("\nBooking processed successfully!\n");

    front++;

    if (front > rear) {
        front = -1;
        rear = -1;
    }
}

void displayQueue() {
    int i;

    if (front == -1 || front > rear) {
        printf("\nNo customers are waiting in the queue.\n");
        return;
    }

    printf("\n===== WAITING QUEUE =====\n");

    for (i = front; i <= rear; i++) {
        printf("\nPosition: %d\n", i - front + 1);
        printf("Customer: %s\n", queue[i].customerName);
        printf("Movie   : %s\n",
               movies[queue[i].movieChoice - 1].name);
        printf("Time    : %s\n",
               showTimes[queue[i].showTime - 1]);
        printf("Tickets : %d\n", queue[i].tickets);
    }
}

int main() {
    int choice;

    do {
        printf("\n=====================================\n");
        printf("     MOVIE TICKET BOOKING SYSTEM\n");
        printf("=====================================\n");

        printf("\n1. View Available Movies\n");
        printf("2. Book Tickets\n");
        printf("3. Process Next Booking\n");
        printf("4. Display Waiting Queue\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayMovies();
                break;

            case 2:
                bookTicket();
                break;

            case 3:
                processBooking();
                break;

            case 4:
                displayQueue();
                break;

            case 5:
                printf("\nThank you for using the system!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}