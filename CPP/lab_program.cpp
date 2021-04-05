#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

// struct node
// {
//     int data;
//     node *left;
//     node *right;
// } * root;

// class BST
// {
// public:
//     BST()
//     {
//         root = NULL;
//     }

//     void insert(node *parent, node *leaf)
//     {
//         if (parent == NULL)
//         {
//             root = leaf;
//             root->data = leaf->data;
//             root->left = NULL;
//             root->right = NULL;
//             return;
//         }

//         if (parent->data >= leaf->data)
//         {
//             if (parent->left != NULL)
//             {
//                 insert(parent->left, leaf);
//                 return;
//             }
//             else
//             {
//                 cout << "Inserted" << endl;
//                 parent->left = leaf;
//                 leaf->left = NULL;
//                 leaf->right = NULL;
//                 return;
//             }
//         }
//         if (parent->data < leaf->data)
//         {
//             if (parent->right != NULL)
//             {
//                 insert(parent->right, leaf);
//                 return;
//             }
//             else
//             {
//                 cout << "Insretd" << endl;
//                 parent->right = leaf;
//                 leaf->left = NULL;
//                 leaf->right = NULL;
//                 return;
//             }
//         }
//     }

//     void display(node *parent)
//     {
//         if (parent != NULL)
//         {
//             display(parent->left);
//             cout << parent->data << " ";
//             display(parent->right);
//         }
//         else
//         {
//             return;
//         }
//     }

//     void tree(node *parent, int l)
//     {
//         if (parent != NULL)
//         {
//             tree(parent->right, l + 1);
//             if (l == 1)
//             {
//                 cout << "R-->";
//             }
//             for (int i = 1; i < l; i++)
//             {
//                 cout << "\t";
//             }
//             cout << parent->data << endl;
//             tree(parent->left, l + 1);
//         }
//         else
//         {
//             return;
//         }
//     }
// };

// int main()
// {
//     BST t;
//     int choice;
//     node *temp;
//     while (true)
//     {
//         cin >> choice;
//         switch (choice)
//         {
//         case 1:
//             cout << "INSETR";
//             temp = new node;
//             cin >> temp->data;
//             t.insert(root, temp);
//             break;

//         case 2:
//             cout << "display";
//             t.display(root);
//             break;

//         case 3:
//             exit(0);

//         case 4:
//             t.tree(root, 1);
//             break;
//         }
//     }
//     return 0;
// }

// class mat
// {
//     int ar[2][2];

// public:
//     mat()
//     {
//         for (int i = 0; i < 2; i++)
//         {
//             for (int j = 0; j < 2; j++)
//             {
//                 ar[i][j] = 0;
//             }
//         }
//     }

//     void input()
//     {
//         for (int i = 0; i < 2; i++)
//         {
//             for (int j = 0; j < 2; j++)
//             {
//                 cin >> ar[i][j];
//             }
//         }
//     }
//     void display()
//     {
//         for (int i = 0; i < 2; i++)
//         {
//             for (int j = 0; j < 2; j++)
//             {
//                 cout << ar[i][j] << "  ";
//             }
//             cout << endl;
//         }
//     }

//     mat operator*(const mat &a)
//     {
//         mat m;
//         for (int i = 0; i < 2; i++)
//         {
//             for (int j = 0; j < 2; j++)
//             {
//                 for (int k = 0; k < 2; k++)
//                 {
//                     m.ar[i][j] += ar[i][k] * a.ar[k][j];
//                 }
//             }
//         }
//         return m;
//     }
// };

// int main()
// {
//     mat x, y;
//     x.input();
//     x.display();
//     y.input();
//     y.display();
//     mat z = x * y;
//     z.display();
//     return 0;
// }

// class box
// {
// public:
//     int x;

//     box(int a)
//     {
//         x = a;
//     }
//     box()
//     {
//         x = 0;
//     }
//     box operator--()
//     {
//         box b;
//         b = x--;
//         return b;
//     }
// };

// int main()
// {
//     box b(5);
//     box c = --b;
//     cout << c.x << endl;
//     cout << b.x << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Time
// {
//     int h, m, s;

// public:
//     Time(int a, int b, int c)
//     {
//         h = a, m = b, s = c;
//     }

//     friend ostream &operator<<(ostream &, Time &);
// };

// ostream &operator<<(ostream &out, Time &a)
// {
//     return out << a.h << a.m << a.s << endl;
// }

// int main()
// {
//     Time t(3, 5, 7);
//     cout << t << endl;
//     return 0;
// }

// void swap1(int *a, int *b)
// {
//     int temp;

//     for (int i = 0; i < 3; i++)
//     {
//         temp = *a;
//         *a = *b;
//         *b = temp;
//         a++;
//         b++;
//     }

//     return;
// }

// int main()
// {
//     int ar[] = {1, 2, 3};
//     int br[] = {4, 5, 6};
//     swap1(ar, br);
//     for (int i = 0; i < 3; i++)
//     {
//         cout << ar[i];
//     }
//     cout << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << br[i];
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void swap1(int *a, int *b)
// {
//     int t;
//     t = *a;
//     *a = *b;
//     *b = t;
// }

// int main()
// {
//     int a = 1;
//     int b = 2;
//     swap1(&a, &b);
//     cout << a << b << endl;
//     return 0;
// }

// int main()
// {
//     int n = 2545, i, c = 0;
//     char r[10];
//     while (n != 0)
//     {
//         i = n % 16;
//         if (i < 10)
//         {
//             r[c] = 48 + i;
//             c++;
//         }
//         else
//         {
//             r[c] = 55 + i;
//             c++;
//         }
//         n = n / 16;
//     }
//     if (n == 0)
//     {
//         r[c] = '\0';
//     }
//     string s = r;
//     reverse(s.begin(), s.end());
//     cout << s << endl;
//     return 0;
// }

// class a
// {
// public:
//     void fun() { cout << "A" << endl; }
// };
// class b1 : virtual public a
// {
// public:
//     void func() { cout << "B1" << endl; }
// };
// class b2 : virtual public a
// {
// public:
//     void func() { cout << "B2" << endl; }
// };
// class c : public b1, public b2
// {
// public:
//     void funk() { cout << "c" << endl; }
// };

// int main()
// {
//     c t;
//     t.fun();
//     t.b1::func();
//     return 0;
// }

class a
{
protected:
    int x;
};

class b : public a
{
public:
    a::x;
    
    b(int y) { x = 11; cout << y <<" "<< x << endl; }
};

int main(){
    b t(10);
    t.x = 19;
    cout<<t.x<<endl;
    return 0;
}

int main(){
    int a =10;
    int *p = &a;
    int **q= &p;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    return 0;
}