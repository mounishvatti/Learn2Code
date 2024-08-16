#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data, Node *next = NULL, Node *prev = NULL) : data(data), next(next), prev(prev) {}
};

// Convert array to doubly linked list
Node *arr2DLL(vector<int> &arr)
{
    if (arr.size() == 0)
    {
        cout << "There are no elements in the array!" << endl;
        return NULL;
    }

    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        temp->prev = mover;
        mover = temp;
    }
    return head;
}

// O(n^2) Brute force solution 
vector<vector<int>> pairsWithGivenSum(Node *head, int sum)
{
    vector<vector<int>> ans;
    if (head == NULL)
        return ans;

    Node *temp1 = head;
    Node *temp2 = NULL;

    while (temp1 != NULL)
    {
        temp2 = temp1->next;

        while (temp2 != NULL && (temp2->data + temp1->data) <= sum)
        {
            if (temp2->data + temp1->data == sum)
            {
                vector<int> temp;
                temp.push_back(temp1->data);
                temp.push_back(temp2->data);
                ans.push_back(temp);
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return ans;
}

// O(n) Optimal approach
vector<vector<int>> pairsWithGivenSumOptimal(Node *head, int sum)
{
    vector<vector<int>> ans;

    if (head == NULL)
    {
        return ans;
    }
    
    Node *left = head;
    Node *right = head;

    // Move right pointer to the end of the list
    while (right->next != NULL)
    {
        right = right->next;
    }

    // Two-pointer technique
    while (left != NULL && right != NULL && left != right && left->prev != right)
    {
        int currentSum = left->data + right->data;

        if (currentSum == sum)
        {
            ans.push_back({left->data, right->data});
            left = left->next;
            right = right->prev;
        }
        else if (currentSum < sum)
        {
            left = left->next;
        }
        else
        {
            right = right->prev;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 9}; // Sorted array
    Node *head = arr2DLL(arr);

    int sum = 5;

    // Brute-force approach
    vector<vector<int>> ans1 = pairsWithGivenSum(head, sum);
    cout << "Brute-force results:" << endl;
    for (const auto &pair : ans1)
        cout << pair[0] << " " << pair[1] << endl;

    cout << endl;

    // Optimal approach
    vector<vector<int>> ans2 = pairsWithGivenSumOptimal(head, sum);
    cout << "Optimal results:" << endl;
    for (const auto &pair : ans2)
        cout << pair[0] << " " << pair[1] << endl;

    return 0;
}
