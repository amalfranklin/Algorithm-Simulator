#include<iostream>
using namespace std;

void print_array(int* a, int n)
{
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}

void bubble_sort_asc()
{
    int n;
    cout<<"How many elements would you like to input?"<< endl;
    cin>>n;
    int *a = new int(n);
    cout<<"Please enter the elements :- "<< endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    for(int i=0; i<n-1; i++)
    {
        cout<<"Pass "<< i+1<< endl;
        for(int j=0; j<n-i-1; j++)
        {
            cout<<a[j]<<" > "<<a[j+1]<<"\t";
            if(a[j]>a[j+1])
            {
                cout<<"SWAP\t";
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                print_array(a,n);
                cout<< endl;
            }
            else
            {
                cout<<"NO SWAP\t";
                print_array(a,n);
                cout<< endl;
            }
        }
        cout<<endl;
    }

    cout<< "Sorted Array :-"<< endl;
    print_array(a,n);
}

void bubble_sort_desc()
{
    int n;
    cout<<"How many elements would you like to input?"<< endl;
    cin>>n;
    int *a = new int(n);
    cout<<"Please enter the elements :- "<< endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    for(int i=0; i<n-1; i++)
    {
        cout<<"Pass "<< i+1<< endl;
        for(int j=0; j<n-i-1; j++)
        {
            cout<<a[j]<<" < "<<a[j+1]<<"\t";
            if(a[j]<a[j+1])
            {
                cout<<"SWAP\t";
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                print_array(a,n);
                cout<< endl;
            }
            else
            {
                cout<<"NO SWAP\t";
                print_array(a,n);
                cout<< endl;
            }
        }
        cout<<endl;
    }

    cout<< "Sorted Array :-"<< endl;
    print_array(a,n);
}

void selection_sort_asc()
{
    int n,min;
    cout<<"How many elements would you like to input?"<< endl;
    cin>>n;
    int *a = new int(n);
    cout<<"Please enter the elements :- "<< endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n-1; i++)
    {
        cout<<endl;
        cout<<"PASS "<< (i+1)<< endl;
        min = i;
        cout<<"min_index = "<< i<< endl;

        for(int j=i+1; j<n; j++)
        {
            cout<<a[j]<<" < "<<a[min]<<"\t";
            if(a[j]<a[min])
            {
                min = j;
                cout<<"min_index = "<< j<<endl;
            }
            else
                cout<<"No change to min_index"<<endl;
        }    
        
        if(min != i)
        {
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
            cout<<min<<" == "<< i<< "\t SWAP "<<a[min]<<" with "<<a[i]<<"."<<endl;
        }
        else
            cout<<min<<" == "<< i<< "\t NO SWAP"<<endl;
        
        print_array(a,n);
        cout<<endl;
    }
    cout<< endl<<"Final Sorted Array :- "<< endl;
    print_array(a,n);
}

void selection_sort_desc()
{
    int n,max;
    cout<<"How many elements would you like to input?"<< endl;
    cin>>n;
    int *a = new int(n);
    cout<<"Please enter the elements :- "<< endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n-1; i++)
    {
        cout<<endl;
        cout<<"PASS "<< (i+1)<< endl;
        max = i;
        cout<<"max_index = "<< i<< endl;

        for(int j=i+1; j<n; j++)
        {
            cout<<a[j]<<" > "<<a[max]<<"\t";
            if(a[j]>a[max])
            {
                max = j;
                cout<<"max_index = "<< j<<endl;
            }
            else
                cout<<"No change to max_index"<<endl;
        }    
        
        if(max != i)
        {
            int temp = a[max];
            a[max] = a[i];
            a[i] = temp;
            cout<<max<<" == "<< i<< "\t SWAP "<<a[max]<<" with "<<a[i]<<"."<<endl;
        }
        else
            cout<<max<<" == "<< i<< "\t NO SWAP"<<endl;
        
        print_array(a,n);
        cout<<endl;
    }
    cout<< endl<<"Final Sorted Array :- "<< endl;
    print_array(a,n);
}

void insertion_sort_asc()
{
    int n;
    cout<<"How many elements would you like to input?"<< endl;
    cin>>n;
    int *a = new int(n);
    cout<<"Please enter the elements :- "<< endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=1; i<n; i++)
    {
        cout<<endl<< "PASS "<< i<< endl;
        cout<<"key = "<< a[i]<< endl;
        int key = a[i];
        int j = i - 1;
        while(j>=0 && a[j]>key)
        { 
            cout<<a[j]<<" > "<<key<<"\t Shift "<<a[j]<<" to 1 index forward."<<endl;
            a[j+1] = a[j];
            j--;
        }
        cout<<"a["<<j+1<<"] = "<<key<< endl;
        a[j+1] = key;
        print_array(a,n);
        cout<<endl;
        
    }
    cout<< endl<<"Final Sorted Array :- "<<endl;
    print_array(a,n);
}

void insertion_sort_desc()
{
    int n;
    cout<<"How many elements would you like to input?"<< endl;
    cin>>n;
    int *a = new int(n);
    cout<<"Please enter the elements :- "<< endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=1; i<n; i++)
    {
        cout<<endl<< "PASS "<< i<< endl;
        cout<<"key = "<< a[i]<< endl;
        int key = a[i];
        int j = i - 1;
        while(j>=0 && a[j]<key)
        { 
            cout<<a[j]<<" < "<<key<<"\t Shift "<<a[j]<<" to 1 index forward."<<endl;
            a[j+1] = a[j];
            j--;
        }
        cout<<"a["<<j+1<<"] = "<<key<< endl;
        a[j+1] = key;
        print_array(a,n);
        cout<<endl;
        
    }
    cout<< endl<<"Final Sorted Array :- "<<endl;
    print_array(a,n);
}

void linear_search()
{
    int n,key,flag=0,i;
    cout<<"How many elements would you like to input?"<< endl;
    cin>>n;
    int *a = new int(n);
    cout<<"Please enter the elements :- "<< endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Please enter the element for the search :- "<< endl;
        cin>>key;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" == "<<key<<"\t";
        if(a[i] == key)
        {
            cout<<"TRUE"<<endl;
            flag = 1;
            break;
        }
        else    
            cout<<"FALSE"<<endl;
    }
    if(flag == 1)
        cout<<"The given element was found at index "<<i<<".";
    else
        cout<<"The given element is not present in the array.";
}

void binary_search()
{
    int n,key,flag=0,count=1;
    cout<<"How many elements would you like to input?"<< endl;
    cin>>n;
    int *a = new int(n);
    cout<<"Please enter the elements in ascending order :- "<< endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Please enter the element for the search :- "<< endl;
        cin>>key;
    int beg=0,end=n-1,mid;
    while(beg<=end)
    {
        cout<<endl<<"PASS "<<count++<<endl;
        mid = (beg + end)/2;
        cout<<"Middle Index = "<<mid<<endl;
        cout<<"Middle Element = "<<a[mid]<<endl;
        if(key == a[mid])
        {
            cout<<"Key "<<key<<" == "<<a[mid]<<"\tTRUE"<<endl;
            flag = 1;
            break;
        }
        else if(key > a[mid])
        {
            cout<<"Key "<<key<<" == "<<a[mid]<<"\tFALSE"<<endl;
            cout<<"Key "<<key<<" > "<<a[mid]<<"\tTRUE"<<endl;
            cout<<"beg = "<<mid + 1<<" (mid + 1)"<<endl;
            beg = mid + 1;
        }
        else
        {
            cout<<"Key "<<key<<" == "<<a[mid]<<"\tFALSE"<<endl;
            cout<<"Key "<<key<<" > "<<a[mid]<<"\tFALSE"<<endl;
            cout<<"Key "<<key<<" < "<<a[mid]<<"\tTRUE"<<endl;
            cout<<"end = "<<mid - 1<<" (mid - 1)"<<endl;
            end = mid - 1;
        }
    }
    if(flag == 1)
        cout<<endl<<"The given element was found at index "<<mid<<".";
    else
        cout<<endl<<"The given element is not present in the array.";

}

struct node{
    node* link;
    int data;
};

node* start = NULL;

void traverse_list()
{
    node* p = start;

    if(p == NULL)
    {
        cout<<"Linked list is empty"<<endl;
        return;
    }

    while(p != NULL)
    {
        cout<<p -> data<<" ";
        p = p -> link;
    }
}

void insert_beg()
{
    int n;
    cout<<"Enter the total number of nodes in the linked list :-"<<endl;
    cin>>n;
    int b[n];
    cout<<"Enter the elements :-"<<endl;
    for(int i=0; i<n; i++)
        cin>>b[i];
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        node* nd = new node;
        nd->data = b[i];
        cout<<"New node nd->data = "<<b[i]<<endl;
        if(start == NULL)
        {
            cout<<"start == NULL\tTRUE"<<endl;
            cout<<"nd -> link = NULL"<<endl;
            cout<<"start = nd"<<endl;
            nd->link = NULL;
            start = nd;
        }
        else
        {
            cout<<"start == NULL\tFALSE"<<endl;
            cout<<"nd -> link = start -> link"<<endl;
            cout<<"start -> link = nd"<<endl;
            nd->link = start;
            start = nd;
        }
        cout<<endl;
    }
    cout<<endl<<"Linked list Traversal :- "<<endl;
    traverse_list();
}

void insert_end()
{
    int n;
    cout<<"Enter the total number of nodes in the linked list :-"<<endl;
    cin>>n;
    int b[n];
    cout<<"Enter the elements :-"<<endl;
    for(int i=0; i<n; i++)
        cin>>b[i];
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        node* nd = new node;
        nd->data = b[i];
        cout<<"New node nd->data = "<<b[i]<<endl;
        if(start == NULL)
        {
            cout<<"start == NULL\tTRUE"<<endl;
            cout<<"nd -> link = NULL"<<endl;
            cout<<"start = nd"<<endl;
            nd->link = NULL;
            start = nd;
        }
        else
        {
            cout<<"start == NULL\tFALSE"<<endl;
            cout<<"Traverse the linked list with the help of a loop to get the address of the last node, stored in pointer p."<<endl;
            cout<<"nd -> link = NULL"<<endl;
            cout<<"p -> link = nd"<<endl;
            node* p = start;
            while(p->link != NULL)
                p = p->link;
            nd -> link = NULL;
            p -> link = nd;
        }
        cout<<endl;
    }
    cout<<endl<<"Linked list Traversal :- "<<endl;
    traverse_list();
}

void del_beg()
{
    int a,n,p;
    cout<<"Enter the total number of nodes in the linked list :-"<<endl;
    cin>>n;
    cout<<"Enter the elements :-"<<endl;
    for(int i=0; i<n; i++)
    {
        node* nd = new node;
        cin>>a;
        nd->data = a;
        if(start == NULL)
        {
            nd->link = NULL;
            start = nd;
        }
        else
        {
            node* p = start;
            while(p->link != NULL)
                p = p->link;
            nd -> link = NULL;
            p -> link = nd;
        }
    }
    cout<<"How many elements would you like to delete :- "<<endl;
    cin>>p;
    cout<<endl;
    if(p>n)
    {
        cout<<"Error :- The number of elements which you want to delete is greater than the total number of elements present in the linked list."<<endl;
        return;
    }
    for(int i=0; i<p; i++)
    {
        cout<<"PASS "<<i+1<<endl;
        if(start == NULL)
        {
            cout<<"start == NULL\tTRUE"<<endl;
            cout<<"The linked list is already empty"<<endl;
        }   
        else
        {
            cout<<"start == NULL\tFALSE"<<endl;
            cout<<"start = start -> link"<<endl;
            start = start->link;
        }
        cout<<endl;
    }
    cout<<endl<<"Final linked list after deletion :- "<<endl;
    traverse_list();
}

void del_end()
{
    int a,n,p;
    cout<<"Enter the total number of nodes in the linked list :-"<<endl;
    cin>>n;
    cout<<"Enter the elements :-"<<endl;
    for(int i=0; i<n; i++)
    {
        node* nd = new node;
        cin>>a;
        nd->data = a;
        if(start == NULL)
        {
            nd->link = NULL;
            start = nd;
        }
        else
        {
            node* p = start;
            while(p->link != NULL)
                p = p->link;
            nd -> link = NULL;
            p -> link = nd;
        }
    }
    cout<<"How many elements would you like to delete :- "<<endl;
    cin>>p;
    cout<<endl;
    if(p>n)
    {
        cout<<"Error :- The number of elements which you want to delete is greater than the total number of elements present in the linked list."<<endl;
        return;
    }
    for(int i=0; i<p; i++)
    {
        cout<<"PASS "<<i+1<<endl;
        if(start == NULL)
        {
            cout<<"start == NULL\tTRUE"<<endl;
            cout<<"The linked list is already empty"<<endl;
        }   
        else if(start->link == NULL)
        {
            cout<<"start == NULL\tFALSE"<<endl;
            cout<<"start -> link == NULL\tTRUE"<<endl;
            cout<<"start = NULL";
            start = NULL;
        }
        else
        {
            cout<<"start == NULL\tFALSE"<<endl;
            cout<<"start -> link == NULL\tFALSE"<<endl;
            cout<<"Traverse the linked list with a loop using 2 pointers to get the address of the node before the last node, stored in pointer prev."<<endl;
            cout<<"prev -> link = NULL"<<endl;
            node* prev = NULL;
            node* p = start;
            while(p->link != NULL)
            {
                prev = p;
                p = p->link;
            }
            prev -> link = NULL;
        }
        cout<<endl;
    }
    cout<<endl<<"Final linked list after deletion :- "<<endl;
    traverse_list();
}

int main()
{
    int choice1,choice2,choice3;

    cout<<"Welcome to Algorithm Simulator. Which type of algorithm would you like to implement? (Input the number next to the choice you would like to choose)"<< endl;
    cout<<"1 - Sorting Algorithms."<< endl;
    cout<<"2 - Searching Algorithms."<< endl;
    cout<<"3 - Linked List Operations."<< endl;
    cin>>choice1;

    switch(choice1)
    {
        case 1:
            cout<<"Please choose the sorting algorithm :-"<< endl;
            cout<<"1 - Bubble Sort."<< endl;
            cout<<"2 - Selection Sort."<< endl;
            cout<<"3 - Insertion Sort."<< endl;
            cin>>choice2;
            cout<<"Please choose the order in which you would like to sort :-"<< endl;
            cout<<"1 - Ascending Order."<< endl;
            cout<<"2 - Descending Order."<< endl;
            cin>>choice3;
            switch(choice2)
            {
                case 1:
                    if(choice3 == 1)
                        bubble_sort_asc();
                    else if(choice3 == 2)
                        bubble_sort_desc();
                    else    
                        cout<<"Wrong Input.";
                    break;

                case 2:
                    if(choice3 == 1)
                        selection_sort_asc();
                    else if(choice3 == 2)
                        selection_sort_desc();
                    else
                        cout<<"Wrong input.";
                    break;
                
                case 3:
                    if(choice3 == 1)
                        insertion_sort_asc();
                    else if(choice3 == 2)
                        insertion_sort_desc();
                    else
                        cout<<"Wrong input.";
                    break;
                
                default:
                    cout<<"Wrong input.";

            }
            break;
        
        case 2:
            cout<<"Please choose the searching algorithm :- "<<endl;
            cout<<"1 - Linear Search"<<endl;
            cout<<"2 - Binary Search"<<endl;
            cin>>choice2;
            if(choice2 == 1)
                linear_search();
            else if(choice2 == 2)
                binary_search();
            else    
                cout<<"Wrong Input.";
            break;

        case 3:
            cout<<"Please choose the required operation :- "<<endl;
            cout<<"1 - Insertion of nodes at the beginning"<<endl;
            cout<<"2 - Insertion of nodes at the end"<<endl;
            cout<<"3 - Deletion of nodes from the beginning"<<endl;
            cout<<"4 - Deletion of nodes from the end"<<endl;
            cin>>choice2;
            switch(choice2)
            {
                case 1:
                    insert_beg();
                    break;

                case 2:
                    insert_end();
                    break;

                case 3:
                    del_beg();
                    break;
                
                case 4:
                    del_end();
                    break;

                default:
                    cout<<"Wrong input.";
            }
            break;
        
        default:
            cout<<"Wrong input.";
    }
}