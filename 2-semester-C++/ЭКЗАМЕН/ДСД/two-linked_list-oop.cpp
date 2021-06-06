#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct Elem{
    int data; // data
    Elem* next;
    Elem *prev;
};

class List{
    Elem* Head; // head
    Elem *Tail; // tail
    int Count; // number of elements
public:
    List();
    List(const List&); // copy constructor
    ~List();
    int GetCount(); // get the size
    Elem* GetElem(int); // get a list item
    void DelAll();// clear all list
    // Deleting an element, if the parameter is not specified,
    // the function requests it
    void Del(int pos = 0);
    // Insert an element, if the parameter is not specified,
    // the function requests it
    void Insert(int pos = 0);
    void AddTail(int n); // adding to the end of the list
    void AddHead(int n); // adding to the top of the list
    void Print(); // print
    void Print(int pos); // Printing a specific item
    List& operator = (const List&);
    List operator + (const List&); // adding two lists (appending)
    // comparison by element
    bool operator == (const List&);
    bool operator != (const List&);
    bool operator <= (const List&);
    bool operator >= (const List&);
    bool operator < (const List&);
    bool operator > (const List&);
    List operator - (); // reverse the list
};

List::List(){
    // iznachalno list is empty
    Head = Tail = nullptr;
    Count = 0;
}

List::List(const List& L){
    Head = Tail = nullptr;
    Count = 0;
    // head of the list, iz kotorogo copy
    Elem* temp = L.Head;
    // until the end of the list
    while (temp != nullptr){
        // perebiraem data
        AddTail(temp->data);
        temp = temp->next;
    }
}

List::~List(){
    DelAll();
}

void List::AddHead(int n){
    // new element
    Elem* temp = new Elem;

    // predudyshego net
    temp->prev = 0;
    // zapolnyaem dannue
    temp->data = n;
    // next - buvshaya head
    temp->next = Head;

    // if there are elements?
    if (Head != nullptr)
        Head->prev = temp;

    // if the element is the first, then it is both head and tail odnovremenno
    if (Count == 0)
        Head = Tail = temp;
    else
        // else, the new element is the head element
        Head = temp;

    Count++;
}

void List::AddTail(int n){
    // creating a new element
    Elem* temp = new Elem;
    // sled net
    temp->next = 0;
    // zapolnyaem dannue
    temp->data = n;
    // predud - buvshiy tail
    temp->prev = Tail;

    // if there are elements?
    if (Tail != 0)
        Tail->next = temp;

    // if the element is the first, then it is both head and tail odnovremenno
    if (Count == 0)
        Head = Tail = temp;
    else
        // else, the new element is the tail element
        Tail = temp;

    Count++;
}

void List::Insert(int pos){
    // if the parameter is missing or equal to 0, then we request it
    if (pos == 0){
        cout << "Input position: ";
        cin >> pos;
    }

    // position from 1 to Count?
    if (pos < 1 || pos > Count + 1){
        // incorrect position
        cout << "Incorrect position !!!" << endl;
        return;
    }

    // if insert at the end of the list
    if (pos == Count + 1){
        // vstavlyaemue dannue
        int data;
        cout << "Input new number: ";
        cin >> data;
        // add to the end of the list
        AddTail(data);
        return;
    }
    else if (pos == 1){
        // vstavlyaemue dannue
        int data;
        cout << "Input new number: ";
        cin >> data;
        // add to the top of the list
        AddHead(data);
        return;
    }

    // counter
    int i = 1;

    // otschituvaem ot golovu n - 1 elementov
    Elem* Ins = Head;

    while (i < pos){
        // we dohodim do element,
        // before which vstavlaem
        Ins = Ins->next;
        i++;
    }

    // we dohodim do element,
    // which predshestvyet
    Elem* PrevIns = Ins->prev;

    // creating a new element
    Elem* temp = new Elem;

    // vvodim dannue
    cout << "Input new number: ";
    cin >> temp->data;

    // setting svazey
    if (PrevIns != 0 && Count != 1)
        PrevIns->next = temp;

    temp->next = Ins;
    temp->prev = PrevIns;
    Ins->prev = temp;

    Count++;
}

void List::Del(int pos){
    // if the parameter is missing or equal to 0, then we request it
    if (pos == 0){
        cout << "Input position: ";
        cin >> pos;
    }
    // position from 1 to Count?
    if (pos < 1 || pos > Count)
    {
        // incorrect position
        cout << "Incorrect position !!!" << endl;
        return;
    }

    // counter
    int i = 1;

    Elem* Del = Head;

    while (i < pos){
        // dohodim do elementa, 
        // kotoruy ydalyetcya
        Del = Del->next;
        i++;
    }

    // dohodim do elementa, 
    // kotoruy predshestvyet edalyaemomy
    Elem* PrevDel = Del->prev;
    // dohodim do elementa, kotoruy sleduet za ydalyaemum
    Elem* AfterDel = Del->next;

    // if we do not remove the head
    if (PrevDel != 0 && Count != 1)
        PrevDel->next = AfterDel;
    // if we do not remove the tail
    if (AfterDel != 0 && Count != 1)
        AfterDel->prev = PrevDel;

    // ydalyautcya krainie?
    if (pos == 1)
        Head = AfterDel;
    if (pos == Count)
        Tail = PrevDel;

    // deleting an item
    delete Del;

    Count--;
}

void List::Print(int pos){
    // position from 1 to Count?
    if (pos < 1 || pos > Count){
        // incorrect position
        cout << "Incorrect position !!!" << endl;
        return;
    }

    Elem* temp;

    // opredelyaemsya s kakoy storonu
    // bustree dvigatsya
    if (pos <= Count / 2){
        // otchet with head
        temp = Head;
        int i = 1;

        while (i < pos){
            // Moving to the nujnogo element
            temp = temp->next;
            i++;
        }
    }
    else{
        // Counting from the tail
        temp = Tail;
        int i = 1;

        while (i <= Count - pos)
        {
            // Moving to the nujnogo element
            temp = temp->prev;
            i++;
        }
    }
    // print
    cout << pos << " element: ";
    cout << temp->data << endl;
}

void List::Print(){
    // if there are elements in the list, then run through it
    // and print the elements, starting with the head
    if (Count != 0) {
        Elem* temp = Head;
        cout << "( ";
        while (temp->next != 0){
            cout << temp->data << ", ";
            temp = temp->next;
        }
        cout << temp->data << " )" << endl;
    }
}

void List::DelAll(){
    // while ostaytsya elements, ydalyaem po odnomy s golovu
    while (Count != 0)
        Del(1);
}

int List::GetCount(){
    return Count;
}

Elem* List::GetElem(int pos){
    Elem* temp = Head;

    // position from 1 to Count?
    if (pos < 1 || pos > Count)
    {
        // incorrect position
        cout << "Incorrect position !!!" << endl;
        return 0;
    }

    int i = 1;
    // looking for the element we need
    while (i < pos && temp != 0){
        temp = temp->next;
        i++;
    }

    if (temp == 0)
        return 0;
    else
        return temp;
}

List& List::operator = (const List& L){
    // proverka prisvaivaniya elementa "samomy sebe"
    if (this == &L)
        return *this;

    // deleting the old list
    this->~List(); // DelAll();

    Elem* temp = L.Head;
    // copy elements
    while (temp != 0){
        AddTail(temp->data);
        temp = temp->next;
    }
    return *this;
}
// slojenie two lists
List List::operator + (const List& L){
  
    List Result(*this); // zanosim the elements of the first list to the vremennuy list
    Elem* temp = L.Head; // List Result = *this;
    // dobavlyaem items from the second list to the vremennuy list
    while (temp != 0){
        Result.AddTail(temp->data);
        temp = temp->next;
    }
    return Result;
}
bool List::operator == (const List& L){
    // sravnenie po kolichestvy
    if (Count != L.Count)
        return false;
    Elem* t1, * t2;
    t1 = Head;
    t2 = L.Head;
    // sravnenie po soderjaniy
    while (t1 != 0){
        // sveryaem dannue, kotorye
        // nahodytsya na odinakovuh position
        if (t1->data != t2->data)
            return false;
        t1 = t1->next;
        t2 = t2->next;
    }
    return true;
}
bool List::operator != (const List& L){
    // using the previous sravneniya function
    return !(*this == L);
}

bool List::operator >= (const List& L){
    // sravnenie po kolichestvy
    if (Count > L.Count)
        return true;
    // sravnenie po soderjaniy
    if (*this == L)
        return true;

    return false;
}

bool List::operator <= (const List& L){
    // sravnenie po kolichestvy
    if (Count < L.Count)
        return true;
    // sravnenie po soderjaniy
    if (*this == L)
        return true;

    return false;
}

bool List::operator > (const List& L){
    if (Count > L.Count)
        return true;

    return false;
}

bool List::operator < (const List& L){
    if (Count < L.Count)
        return true;

    return false;
}

// perevorot
List List::operator - (){
    List Result;

    Elem* temp = Head;
    // Copy the list items, starting from the head,
    // v svoy pytem dobavleniya elementov v golovy,
    // takim obrazom vremennuy spisok Result bydet soderjat
    // elements in reverse poradke
    while (temp != 0){
        Result.AddHead(temp->data);
        temp = temp->next;
    }

    return Result;
}

void main(){
    List L;

    const int n = 3;
    int a[n] = { 0,1,2 };

    // dobavlyaem elements, stoyashie na chetnuh idx, v golovy,
    // na nechetnuh - v hvost
    for (int i = 0; i < n; i++)
        if (i % 2 == 0)
            L.AddHead(a[i]);
        else
            L.AddTail(a[i]);

    // print list
    cout << "List L:\n";
    L.Print();

    cout << endl;

    // Вставка элемента в список
    L.Insert();
    // Распечатка списка
    cout << "List L:\n";
    L.Print();

    // Распечатка 2-го и 8-го элементов списка
    L.Print(2);
    L.Print(8);

    List T;

    // Копируем список
    T = L;
    // Распечатка копии
    cout << "List T:\n";
    T.Print();

    // Складываем два списка (первый в перевернутом состоянии)
    cout << "List Sum:\n";
    List Sum = -L + T;
    // Распечатка списка
    Sum.Print();
}