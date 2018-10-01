#include <stdio.h>
#include <stdlib.h>
#include "monster_attack.h"
#include "linked_list_demo.h"
#include "linked_list.h"
#include "savings_accounts.h"

void clean_stdin();

void clean_stdin() {
  int c;
  do {
    c = getchar();
  } while (c != '\n' && c != EOF);
}

void show_monster_menu() {
  printf("\n--- C Monster Linked List Demonstration --- \n\n");
  printf("0. Quit\n");
  printf("1. Prepend an element\n");
  printf("2. Append an element\n");
  printf("3. Search for an element\n");
  printf("4. Insert after an element\n");
  printf("5. Insert before an element\n");
  printf("6. Remove front node\n");
  printf("7. Remove back node\n");
  printf("8. Remove any node\n");
  printf("9. Sort the list\n");
  printf("10. Reverse the linked list\n");
  printf("11. Prints the linked list\n");
}

void show_saving_menu() {
  printf("\n--- C saving Linked List Demonstration --- \n\n");
  printf("0. Quit\n");
  printf("1. Prepend an element\n");
  printf("2. Append an element\n");
  printf("3. Search for an element\n");
  printf("4. Insert after an element\n");
  printf("5. Insert before an element\n");
  printf("6. Remove front node\n");
  printf("7. Remove back node\n");
  printf("8. Remove any node\n");
  printf("9. Sort the list\n");
  printf("10. Reverse the linked list\n");
  printf("11. Prints the linked list\n");
}

int main(int argc, char const *argv[]) {
  int command;
  char choice;

  node *head = NULL;
  node *temp = NULL;

  int counter = 0;
  int temp_num = 0;

  void *(*create)(void *ptr, int n);
  void *(*print)(void *ptr);
  int *(*id)(void *ptr);
  void *data;

  printf("Choose 'm' for monsters or 's' for savings account");
  choice = (char) getchar();
  clean_stdin();
  if (choice == 'm') {
    create = (void *) create_monster;
    print = (void *) print_monster;
    id = (int *(*)(void *)) (int *) getMonsterId;
  } else if (choice == 's') {
    create = (void *) create_saving;
    print = (void *) print_saving;
    id = (int *(*)(void *)) (int *) getSavingId;
  } else {
    printf("Try again!\n");
  }

  do {
    if (choice == 'm') {
      show_monster_menu();
    } else if (choice == 's') {
      show_saving_menu();
    }
    printf("\nEnter a command (0-10, 0 to quit): ");
    scanf("%i", &command);
    clean_stdin();
    switch (command) {
      case 1:
        printf("Please enter data to prepend: ");
        data = create(data, counter);
        counter++;
        head = prepend(head, data);
        traverse(head, print);
        break;
      case 2:
        printf("Please enter data to append: ");
        data = create(data, counter);
        counter++;
        head = append(head, data);
        traverse(head, print);
        break;
      case 3:
        printf("Please enter an ID to search: ");
        scanf("%i", &temp_num);
        clean_stdin();
        temp = search(head, temp_num, id);
        if (temp != NULL) {
          printf("Element with ID value %i found.", temp_num);
        } else {
          printf("Element with ID value %i not found.", temp_num);
        }
        break;
      case 4:
        printf("Enter the ID value after which you would like to insert the new value: ");
        scanf("%i", &temp_num);
        clean_stdin();
        temp = search(head, temp_num, id);
        if (temp != NULL) {
          printf("Enter data to insert: ");
          data = create(data, counter);
          counter++;
          head = insert_after(head, data, temp);
          if (head != NULL) {
            traverse(head, print);
          }
        } else {
          printf("Element with value %i not found.", temp_num);
        }
        break;
      case 5:
        printf("Enter the ID value before which you would like to insert a new value: ");
        scanf("%i", &temp_num);
        clean_stdin();
        temp = search(head, temp_num, id);
        if (temp != NULL) {
          printf("Enter data to insert: ");
          data = create(data, counter);
          counter++;
          head = insert_before(head, data, temp);
          if (head != NULL) {
            traverse(head, print);
          }
        } else {
          printf("Element ID value %i not found.", temp_num);
        }
        break;
      case 6:
        head = remove_front(head);
        if (head != NULL) {
          traverse(head, print);
        }
        break;
      case 7:
        head = remove_back(head);
        if (head != NULL) {
          traverse(head, print);
        }
        break;
      case 8:
        printf("Enter ID value to remove: ");
        scanf("%i", &temp_num);
        clean_stdin();
        temp = search(head, temp_num, id);
        if (temp != NULL) {
          remove_any(head, temp);
          if (head != NULL) {
            traverse(head, print);
          }
        } else {
          printf("Element ID value %i not found.", temp_num);
        }
        break;
      case 9:
        head = insertion_sort(head);
        if (head != NULL) {
          traverse(head, print);
        }
        break;
      case 10:
        head = reverse(head);
        if (head != NULL) {
          traverse(head, print);
        }
        break;
      case 11:
        if (head != NULL) {
          traverse(head, print);
        }
      default:
        break;
    }

  } while (command != 0);
  clear(data);
  free(data);
  return 0;
}
