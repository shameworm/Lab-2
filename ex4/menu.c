#include "ex4.h"
void menu() {
    int c, f, s, ns1, element, ns2, kolvotoad;
    int* p;
    int size = 0;
    p = create(size);
    do{
        switch(c){
            case 1:
                p = add(p, size);
                size++;
                print(p, size);
                printf("\n");
                break;
            case 2:
                printf("Enter item: ");
                scanf("%d", &element);
                printf("Enter index: ");
                scanf("%d", &f);
                insert(p, size, f, element);
                size++;
                print(p, size);
                break;
            case 3:
                printf("Size: %d", getSize(size));
                break;
            case 4:
                printf("Enter element index: ");
                scanf("%d", &f);
                remove0(p, size, f);
                size--;
                print(p, size);
                break;
            case 5:
                printf("Enter index: ");
                scanf("%d", &f);
                printf("Enter new element: ");
                scanf("%d", &element);
                setElement(p, f, element);
                print(p, size);
                break;
            case 6:
                printf("Enter element index: ");
                scanf("%d", &f);
                printf("Element %d", getElement(p, f));
                break;
            default:
                break;
        }
    }while(printf("\nwhich opperation do you want to run?\nChoose one:\n1.add 1 cell\n2.insert value by index\n3.amount elements in array \n4.remove by index\n5.change valuue of existing element\n6. get element by index\n7.exit.\n")&&scanf("%d", &c)!=1||c!=7);

    free(p);
}

