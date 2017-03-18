//BINARAY SEARCH TREE 
#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
int info;
struct node *left, *right;	
}*root=NULL,*nptr;

int insert (node *r,node *n)
{
	if(root==NULL)
	{
		root=n;
		root->left=NULL;
		root->right=NULL;
		return 0;
	}
	if(r->info==n->info)
	{
		cout<<"tree";
		return 0;
	}
	if(r->info>n->info)
	{
		if(r->left!=NULL)
		{
			insert(r->left,n);
		}
		else
		{
			r->left=n;
			(r->left)->left=NULL;
			(r->left)->right=NULL;
		}
		return 0;
    }
    else
    {
    	if(r->right!=NULL)
    	{
    		insert(r->right,n);
		}
		else
		{
			r->right=n;
			(r->right)->right=NULL;
			(r->right)->left=NULL;
		}
		return 0;
	}
//PRE ORDER
	}
	int pre(node *p)
	{
		if(root==NULL)
		{
			cout<<"Tree is NULL\n";
			return 0;
		}
		if(p!=NULL)
		{
			cout<<p->info<<endl;
			pre(p->left);
			pre(p->right);
		}
	}
//POST ORDER	
	int post(node *p)
	{
		if(root==NULL)
		{
			cout<<"Tree is empty\n";
			return 0;
		}
		if(p!=NULL)
		{
			post(p->left);
			post(p->right);
			cout<<p->info<<endl;
		}
	}
//IN ORDER
	int in(node *p)
	{
		if(root==NULL)
		{
			cout<<"Tree is empty\n";
			return 0;
		}
		if(p!=NULL)
		{
			post(p->left);
			cout<<p->info<<endl;
			post(p->right);
		}
	}
	
	int main()
	{
		int n;
		for(int i=0;i<5;i++)
		{
			cout<<"Enter the Choice\n";
    	cin>>n;
		switch(n)
		{
			case 1: nptr=new node;
			        cin>>nptr->info;
			        insert(root,nptr);
			        break;
			case 2: cout<<"PRE ORDER\n";
			        pre(root);
			        break;
		    case 3: cout<<"POST ORDER\n";
			        post(root);
		            break;
		    case 4: cout<<"IN ORDER\n";
		            in(root);
		            break;
		}
	}
}
