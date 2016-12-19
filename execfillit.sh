echo "\033[0;31m\ntest fillit execute sans arguments :\033[00m"
./fillit
echo "\033[0;31m\ntest fillit execute avec trop d'arguments :\033[00m"
./fillit test_files/testerreur1.fillit zboub.fillit
echo "\033[0;31m\ntest fillit d'un fichier inexistant :\033[00m"
./fillit test_files/testerrreur.fillit
echo "\033[0;31m\ntest fillit une grille avec un tetri colle a un autre :\033[00m"
./fillit test_files/testerreur1.fillit
echo "\033[0;31m\ntest fillit d'une grille avec trop de retour a la ligne :\033[00m"
./fillit test_files/testerreur5.fillit
echo "\033[0;31m\ntest fillit d'une grille trop large :\033[00m"
./fillit test_files/testerreur6.fillit
echo "\033[0;31m\ntest fillit une grille avec un tetri de plus de 26 tetri :\033[00m"
./fillit test_files/testerreur2.fillit
echo "\033[0;31m\ntest fillit une grille avec un tetri de moins de 4 :\033[00m"
./fillit test_files/testerreur3.fillit
echo "\033[0;31m\ntest fillit d'une grille avec un tetri vide :\033[00m"
./fillit test_files/testerreur4.fillit
echo "\033[0;31m\ntest fillit d'une grille avec autre chose que des '#' '.' ou 'retour' :\033[00m"
./fillit test_files/testerreur7.fillit
echo "\033[0;31m\ntest fillit d'une grille autogen INVALIDE :\033[00m"
./fillit test_files/testerreur8.fillit
echo "\033[0;31m\ntest fillit d'une grille autogen INVALIDE :\033[00m"
./fillit test_files/testerreur9.fillit
echo "\033[0;31m\ntest fillit d'une grille autogen INVALIDE :\033[00m"
./fillit test_files/testerreur10.fillit
echo "\033[0;32m\ntest fillit de la grille VALIDE test1.fillit :\033[00m"
./fillit test_files/test1.fillit
echo "\033[0;32m\ntest fillit de la grille VALIDE test2.fillit :\033[00m"
./fillit test_files/test2.fillit
echo "\033[0;32m\ntest fillit de la grille VALIDE test3.fillit :\033[00m"
./fillit test_files/test3.fillit
echo "\033[0;32m\ntest fillit de la grille VALIDE test4.fillit :\033[00m"
./fillit test_files/test4.fillit
echo "\033[0;32m\ntest fillit de la grille VALIDE test5.fillit :\033[00m"
./fillit test_files/test5.fillit
echo "\033[0;32m\ntest fillit de la grille autogen VALIDE test6.fillit :\033[00m"
./fillit test_files/test6.fillit
echo "\033[0;32m\ntest fillit de la grille autogen VALIDE test7.fillit :\033[00m"
./fillit test_files/test7.fillit
echo "\033[0;32m\ntest fillit de la grille autogen VALIDE test8.fillit :\033[00m"
./fillit test_files/test8.fillit
echo "\033[0;32m\ntest fillit de la grille autogen VALIDE test9.fillit :\033[00m"
./fillit test_files/test9.fillit
echo "\033[0;32m\ntest fillit de la grille autogen VALIDE test10.fillit :\033[00m"
./fillit test_files/test10.fillit