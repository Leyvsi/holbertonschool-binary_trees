# Binary Trees

Ce projet introduit les structures de données en arbre binaire et leurs opérations de base.

## Contenu

- Création de nœuds (`binary_tree_node`)
- Parcours (preorder, inorder, postorder)
- Calcul de hauteur, profondeur, taille
- Comptage des feuilles et des nœuds
- Vérifications : arbre plein, parfait
- Relations familiales : parent, sibling, uncle
- Suppression d’un arbre

## Structure utilisée

Les arbres binaires, BST, AVL et Max Binary Heap utilisent tous la même structure :

`c
struct binary_tree_s
{
int n;
struct binary_tree_s *parent;
struct binary_tree_s *left;
struct binary_tree_s *right;
};
