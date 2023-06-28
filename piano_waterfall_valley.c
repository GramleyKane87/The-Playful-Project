#include<stdio.h>
#include<stdlib.h>

// Declare all necessary data structures
typedef struct{
	int x;
	int y;
}Point;

typedef struct{
	int size;
	int capacity;
	Point* points;
}PointList;

// Declare all necessary functions
void initPointList(PointList* list, int capacity);
void addPoint(PointList* list, int x, int y);
void removePoint(PointList* list, int index);
void movePoint(PointList* list, int index, int newX, int newY);
void printPointList(PointList* list);

// Main function of the program
int main() {
	PointList myList;
	int choice;
	int x;
	int y;
	int index;
	
	// Initialize the list
	initPointList(&myList, 10);
	
	do {
		// Display available options
		printf("The Playful Project\n");
		printf("1. Add a point\n");
		printf("2. Remove a point\n");
		printf("3. Move a point\n");
		printf("4. Print points\n");
		printf("5. Quit\n");
		
		// Get user choice
		printf("\nEnter Choice: ");
		scanf("%d", &choice);
		
		if (choice == 1) {
			// Add a point
			printf("Enter x: ");
			scanf("%d", &x);
			
			printf("Enter y: ");
			scanf("%d", &y);
			
			addPoint(&myList, x, y);
		}
		
		else if (choice == 2) {
			// Remove a point
			printf("Enter index: ");
			scanf("%d", &index);
			
			removePoint(&myList, index);
		}
		
		else if (choice == 3) {
			// Move a point
			printf("Enter index: ");
			scanf("%d", &index);
			
			printf("Enter new x: ");
			scanf("%d", &x);
			
			printf("Enter new y: ");
			scanf("%d", &y);
			
			movePoint(&myList, index, x, y);
		}
		
		else if (choice == 4) {
			// Print all points
			printPointList(&myList);
		}
		
		else if (choice == 5) {
			// Quit the program
			printf("Bye!\n");
		}
		
		else {
			// Invalid option
			printf("Invalid choice!\n");
		}
		
		printf("\n");
	}while (choice != 5);
	
	return 0;
}

// Functions
void initPointList(PointList* list, int capacity) {
	list->size = 0;
	list->capacity = capacity;
	list->points = (Point*)malloc(capacity * sizeof(Point));
}

void addPoint(PointList* list, int x, int y) {
	if (list->size < list->capacity) {
		list->points[list->size].x = x;
		list->points[list->size].y = y;
		list->size++;
		printf("Point added!\n");
	}
	else {
		printf("List is full!\n");
	}
}

void removePoint(PointList* list, int index) {
	if (index >= 0 && index < list->size) {
		for (int i = index; i < list->size-1; i++) {
			list->points[i] = list->points[i+1];
		}
		list->size--;
		printf("Point removed!\n");
	}
	else {
		printf("Invalid index!\n");
	}
}

void movePoint(PointList* list, int index, int newX, int newY) {
	if (index >= 0 && index < list->size) {
		list->points[index].x = newX;
		list->points[index].y = newY;
		printf("Point moved!\n");
	}
	else {
		printf("Invalid index!\n");
	}
}

void printPointList(PointList* list) {
	for (int i = 0; i < list->size; i++) {
		printf("(%d, %d)\n", list->points[i].x, list->points[i].y);
	}
}