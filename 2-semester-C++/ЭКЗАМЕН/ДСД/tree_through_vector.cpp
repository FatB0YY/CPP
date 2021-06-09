#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

struct node { // structure for the " number tree"
    unsigned int data;
    int left;
    int right;
};

void makeNode(vector <struct node>& v1, int data) { // create a node without adding
    struct node b1 = { data, -1, -1 };
    v1.push_back(b1);
}

void setLeftNode(vector <struct node>& v1, int current, int data) { // add the node to the left
    unsigned int leftIndex = v1.size();
    v1[current].left = leftIndex;
    makeNode(v1, data);
}

void setRightNode(vector<struct node>& v1, int current, int data) { // add the node to the right
    unsigned int rightIndex = v1.size();
    v1[current].right = rightIndex;
    makeNode(v1, data);
}

int insertNode(vector <struct node>& v1, int data) { // insert node
    if (v1.size() == 0) return -1; // first create at least 1 node via makeNode
    unsigned int currentIndex = 0;
    while (currentIndex < v1.size()) {
        if (data <= v1[currentIndex].data) { // smaller or equal numbers go to the left subtree
            if (v1[currentIndex].left == -1) {
                setLeftNode(v1, currentIndex, data);
                return 1;
            }
            else currentIndex = v1[currentIndex].left;
        }
        else {
            if (v1[currentIndex].right == -1) {
                setRightNode(v1, currentIndex, data);
                return 1;
            }
            else currentIndex = v1[currentIndex].right;
        }
    }
    return 0;
}

void preOrderTraversing(vector <struct node>& v1, unsigned int index) { 
    cout << v1[index].data << ' '; 
    if (v1[index].left != -1) preOrderTraversing(v1, v1[index].left);
    if (v1[index].right != -1) preOrderTraversing(v1, v1[index].right);
}

void inOrderTraversing(vector <struct node>& v1, unsigned int index) { 
    if (v1[index].left != -1) inOrderTraversing(v1, v1[index].left);
    cout << v1[index].data << ' '; 
    if (v1[index].right != -1) inOrderTraversing(v1, v1[index].right);
}

void postOrderTraversing(vector <struct node>& v1, unsigned int index) { 
    if (v1[index].left != -1) postOrderTraversing(v1, v1[index].left);
    if (v1[index].right != -1) postOrderTraversing(v1, v1[index].right);
    cout << v1[index].data << ' '; 
}

int main() {
    vector <struct node> v1;
    //                5
    //              3   7
    //             1 4 6 8
    makeNode(v1, 5);
    int order[] = { 3, 7, 1, 4, 6, 8 }; //order of adding nodes for the test
    int n = sizeof(order) / sizeof(int); //number of nodes to add
    for (int i = 0; i < n; i++) insertNode(v1, order[i]);

    cout << endl << "Tree is: ";
    for (int index = 0; index < v1.size(); index++)
        cout << endl << index << ")\t" <<
        "data=" << v1[index].data << "\t" <<
        "leftIndex=" << v1[index].left << "\t" <<
        "rightIndex=" << v1[index].right;

    cout << endl << "pre-order traversing: ";
    preOrderTraversing(v1, 0);
    cout << endl << "in-order traversing: ";
    inOrderTraversing(v1, 0);
    cout << endl << "post-order traversing: ";
    postOrderTraversing(v1, 0);

    cin.sync(); cin.get(); return 0;
}