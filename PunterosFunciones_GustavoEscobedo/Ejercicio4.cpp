#include <iostream>
#include <vector>

using namespace std;

struct node {
   int data;
   struct node *left;
   struct node *right;
};
struct node *createNode(int val) {
   struct node *temp = (struct node *)malloc(sizeof(struct node));
   temp->data = val;
   temp->left = temp->right = NULL;
   return temp;
}
void inorder(struct node *root) {
   if (root != NULL) {
      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);
   }
}
struct node* insertNode(struct node* node, int val) {
   if (node == NULL) return createNode(val);
   if (val < node->data)
   node->left = insertNode(node->left, val);
   else if (val > node->data)
   node->right = insertNode(node->right, val);
   return node;
}

int main()
{
    
    struct node *root = NULL;
    
    int x;
    bool Nrep=false;
    vector<int> Numeros, NSR;
    
    for(int i = 0; i < 10; i++)
    {
        
        cout<<"Ingresa un numero: ";
        cin>>x;
        cout<<endl;
        Numeros.push_back(x);
        
    }
    
    for (int i = 0; i < Numeros.size(); i++)
    {
        for(int j = 0; j < Numeros.size(); j++)
        {
            if( i != j)
            {
                
                if(Numeros[i] == Numeros[j])
                {
                    //cout<<Numeros[i]<<" == "<<Numeros[j]<<endl;
                    Nrep=false;
                    break;
                }
                else
                {
                    //cout<<Numeros[i]<<" != "<<Numeros[j]<<endl;
                    Nrep = true;
                }
                
            }
        }
        
        if(Nrep)
        {
            NSR.push_back(Numeros[i]);
        }
        
    }
    
    for(int i = 0; i < NSR.size(); i++)
    {
        cout<<NSR[i]<<" ";
    }
    
    root = insertNode(root, Numeros[0]);
    for(int i = 1; i < NSR.size(); i++)
    {
        insertNode(root, Numeros[i]);
    }
    
    cout<<"\nNumeros en orden: ";
    inorder(root);

    return 0;
}
