#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

void preOrder(Node* root){
   if(root==NULL){
    return;
   }
   cout<< root->data<<" ";
   preOrder(root->left);
   preOrder(root->right);
    
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

vector<int> levelbylevel(Node* root){
    queue<Node*>q;
    vector<int>ans;
    if(root==NULL) return ans;
    while(!q.empty()){
        q.push(root);
        Node* node = q.front();
        q.pop();
        ans.push_back(node->data);
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);

    }
    return ans;

}

void printLevelOrder(Node* root) {
        if (root == nullptr) return;
        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            while (levelSize > 0) {
                Node* current = q.front();
                q.pop();
                cout << current->data << " ";
                
                if (current->left != nullptr) q.push(current->left);
                if (current->right != nullptr) q.push(current->right);

                levelSize--;
            }
            cout << endl;
        }
    }

int main(){
    Node* root = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    root->left = temp1;
    root->right = temp2;
    // preOrder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<endl;
    printLevelOrder(root);
}