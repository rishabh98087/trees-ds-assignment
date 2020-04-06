#include<stdio.h>
#include<stdlib.h>
struct t_node
{
    int data;
    struct t_node *left;
    struct t_node *right;
};
struct node* create(int info)
{
  struct t_node* New= (struct t_node*)malloc(sizeof(struct t_node));
  New->data = info;
  New->left = NULL;
  New->right = NULL;
  return(New);
}
void inorder(struct t_node *rt)
{
    if(rt!=NULL)
    {
       inorder(rt->left);
       printf("%d ",rt->data);
        inorder(rt->right);

    }
}
int main()
{
  struct t_node *root = create(1);
  root->left = create(2);
  root->right = create(3);
  root->left->left  = create(4);
  root->left->right  = create(7);
  root->right->left=create(5);
  root->right->right=create(6);
  root->right->right->left=create(8);
  inorder(root);
  getchar();
  return 0;
}
