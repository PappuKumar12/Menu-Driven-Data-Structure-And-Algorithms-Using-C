#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

void menu1(){
    printf("Enter 1: Linear Searching\n");
    printf("Enter 2: Binary Searching\n");

    int choice;
    printf("Enter Your Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            linearSearch();
            break;
        case 2:
            binarySearch();
            break;
        case 3:
            exit(0);
        default:
            printf("You Have Entered Wrong Choice\n");
            printf("Please Choose Correct Choice\n");
            break;
    }
}
int main(){
    printf("Enter 1: Searching\n");
    printf("Enter 2: Sorting\n");
    printf("Enter 3: Stack\n");
    printf("Enter 4: Queue\n");
    printf("Enter 5: Linked List\n");
    printf("Enter 6: Tree\n");
    printf("Enter 7: Graph\n\n");

    int choice;
    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            menu1();
            break;
        case 2:
            sorting:
            printf("Enter 1: Selection Sort\n");
            printf("Enter 2: Bubble Sort\n");
            printf("Enter 3: Insertion Sort\n");
            printf("Enter 4: Quick Sort\n");
            printf("Enter 5: Merge Sort\n");
            printf("Enter 6: Counting Sort\n");
            printf("Enter 7: Radix Buket Sort\n");
            printf("Enter 8: Merge Sort\n");
            printf("Enter 9: Radix Sort\n");

            printf("Enter Your Choice: ");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                    selectionSort();
                    break;
                case 2:
                    bubbleSort();
                    break;
                case 3:
                    insertionSort();
                    break;
                case 4:
                    QuickSort();
                    break;
                case 5:
                    mergeSort();
                    break;
                case 6:
                    countingSort();
                    break;
                case 7:
                    shellBuketSort();
                    break;
                case 8:
                    heapSort();
                    break;
                case 9:
                    readixSort();
                    break;
                default:
                    printf("You Have Entered Wrong Choice\n");
                    printf("Please Choose Correct Choice\n");
                    goto sorting;
                    break;
            }
            break;
        case 3:
            stack:
            printf("Enter 1: Implementation Through Arrays\n");
            printf("Enter 2: Implementation Through linked List\n");

            printf("Enter Your Choice: ");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                    stackImpArray();
                    break;
                case 2:
                    stackImpList();
                    break;
                default:
                    printf("You Have Entered Wrong Choice\n");
                    printf("Please Choose Correct Choice\n");
                    goto stack;
                    break;
            }
            break;
        case 4:
            queue:
            printf("Enter 1: Queue\n");
            printf("Enter 2: Circular Queue\n");
            printf("Enter 3: Deque\n");

            printf("Enter Your Choice: ");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                    printf("Enter 1: Queue Implementation Through Array\n");
                    printf("Enter 2: Queue Implementation Through Linked List\n");
                    printf("Enter 1: Queue Implementation Through stack\n");

                    printf("Enter Your Choice: ");
                    scanf("%d",&choice);
                    switch(choice){
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;;
                        default:
                            printf("You Have Entered Wrong Choice\n");
                            printf("Please Choose Correct Choice\n");
                            break;
                    }
                    break;
                case 2:
                    printf("Enter 1: Queue Implementation Through Array\n");
                    printf("Enter 2: Queue Implementation Through Linked List\n");

                    printf("Enter Your Choice: ");
                    scanf("%d",&choice);
                    switch(choice){
                        case 1:
                            break;
                        case 2:
                            break;
                        default:
                            printf("You Have Entered Wrong Choice\n");
                            printf("Please Choose Correct Choice\n");
                            break;
                    }
                    break;
                case 3:
                    printf("Enter 1: Queue Implementation Through Circular Array\n");

                    printf("Enter Your Choice: ");
                    scanf("%d",&choice);
                    switch(choice){
                        case 1:
                            break;
                        default:
                            printf("You Have Entered Wrong Choice\n");
                            printf("Please Choose Correct Choice\n");
                            break;
                    }
                    break;
                default:
                    printf("You Have Entered Wrong Choice\n");
                    printf("Please Choose Correct Choice\n");
                    goto queue;
                    break;
            }
            break;
        case 5:
            list:
            printf("Enter 1: for Singly Linked List\n");
            printf("Enter 2: for Doubly Linked List\n");
            printf("Enter 3: for Circular Singly Linked List\n");
            printf("Enter 4: for Circular Doubly Linked List\n");
            printf("Enter 5: for Exit");

            printf("Enter Your Choice: ");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    exit(0);
                    break;
                default:
                    printf("You Have Entered Wrong Choice\n");
                    printf("Please Choose Correct Choice\n");
                    break;
            }
            break;
        case 6:
            break;
        case 7:
            break;
        default:
            printf("You Have Entered wrong Choice\n");
            printf("Please Select Right Choice\n");
    }
    return 0;
}