/*
 *  main function
 */

#include "BTree.h"
#include<fstream>

BTree read_file(string file_name)
{
	BTree tree;
	/*
	  open the file and use the input operator (operator>>)
	  to construct a new tree
	*/

	return tree;
}


int main()
{
	ofstream outfile;
	outfile.open("outfiles");
	ifstream file1l{"1l"};
	BTree tree1l; 
	file1l >> tree1l;
	outfile << "1l inorder: ";
	tree1l.inorder(outfile, *(tree1l.get_root()));
	outfile << endl;
	ifstream file1p{"1p"};
	BTree tree1p; 
	file1p >> tree1p;
	outfile << "1p inorder: ";
	tree1p.inorder(outfile, *(tree1p.get_root()));
	outfile << endl;
	ifstream file1r{ "1r" };
	BTree tree1r;
	file1r >> tree1r;
	outfile << "1r inorder: ";
	tree1r.inorder(outfile, *(tree1r.get_root()));
	outfile << endl;
	

	ifstream file2l{ "2l" };
	BTree tree2l;
	file2l >> tree2l;
	outfile << "2l inorder: ";
	tree2l.inorder(outfile, *(tree2l.get_root()));
	outfile << endl;
	ifstream file2p{ "2p" };
	BTree tree2p;
	file2p >> tree2p;
	outfile << "2p inorder: ";
	tree2p.inorder(outfile, *(tree2p.get_root()));
	outfile << endl;
	ifstream file2r{ "2r" };
	BTree tree2r;
	file2r >> tree2r;
	outfile << "2r inorder: ";
	tree2r.inorder(outfile, *(tree2r.get_root()));
	outfile << endl;

	ifstream file3l{ "3l" };
	BTree tree3l;
	file3l >> tree3l;
	outfile << "3l inorder: ";
	tree3l.inorder(outfile, *(tree3l.get_root()));
	outfile << endl;
	ifstream file3p{ "3p" };
	BTree tree3p;
	file3p >> tree3p;
	outfile << "3p inorder: ";
	tree3p.inorder(outfile, *(tree3p.get_root()));
	outfile << endl;
	ifstream file3r{ "3r" };
	BTree tree3r;
	file3r >> tree3r;
	outfile << "3r inorder: ";
	tree3r.inorder(outfile, *(tree3r.get_root()));
	outfile << endl;

	ifstream file4l{ "4l" };
	BTree tree4l;
	file4l >> tree4l;
	outfile << "4l inorder: ";
	tree4l.inorder(outfile, *(tree4l.get_root()));
	outfile << endl;
	ifstream file4p{ "4p" };
	BTree tree4p;
	file4p >> tree4p;
	outfile << "4p inorder: ";
	tree4p.inorder(outfile, *(tree4p.get_root()));
	outfile << endl;
	ifstream file4r{ "4r" };
	BTree tree4r;
	file4r >> tree4r;
	outfile << "4r inorder: ";
	tree4r.inorder(outfile, *(tree4r.get_root()));
	outfile << endl;

	outfile << "lvl-by-lvl for 1l:" << endl;
	tree1l.print_level_by_level(outfile);
	outfile << endl;
	outfile << "lvl-by-lvl for 1p:" << endl;
	tree1p.print_level_by_level(outfile);
	outfile << endl;
	outfile << "lvl-by-lvl for 1r:" << endl;
	tree1r.print_level_by_level(outfile);
	outfile << endl;

	outfile << "lvl-by-lvl for 2l:" << endl;
	tree2l.print_level_by_level(outfile);
	outfile << endl;
	outfile << "lvl-by-lvl for 2p:" << endl;
	tree2p.print_level_by_level(outfile);
	outfile << endl;
	outfile << "lvl-by-lvl for 2r:" << endl;
	tree2r.print_level_by_level(outfile);
	outfile << endl;

	outfile << "lvl-by-lvl for 3l:" << endl;
	tree3l.print_level_by_level(outfile);
	outfile << endl;
	outfile << "lvl-by-lvl for 3p:" << endl;
	tree3p.print_level_by_level(outfile);
	outfile << endl;
	outfile << "lvl-by-lvl for 3r:" << endl;
	tree3r.print_level_by_level(outfile);
	outfile << endl;

	outfile << "lvl-by-lvl for 4l:" << endl;
	tree4l.print_level_by_level(outfile);
	outfile << endl;
	outfile << "lvl-by-lvl for 4p:" << endl;
	tree4p.print_level_by_level(outfile);
	outfile << endl;
	outfile << "lvl-by-lvl for 4r:" << endl;
	tree4r.print_level_by_level(outfile);
	outfile << endl;


	outfile << "1l average search cost: ";
	outfile << tree1l .average_search_cost() << endl;
	outfile << "1p average search cost: ";
	outfile << tree1p.average_search_cost() << endl;
	outfile << "1r average search cost: ";
	outfile << tree1r.average_search_cost() << endl;
	outfile << "2l average search cost: ";
	outfile << tree2l.average_search_cost() << endl;
	outfile << "2p average search cost: ";
	outfile << tree2p.average_search_cost() << endl;
	outfile << "2r average search cost: ";
	outfile << tree2r.average_search_cost() << endl;
	outfile << "3l average search cost: ";
	outfile << tree3l.average_search_cost() << endl;
	outfile << "3p average search cost: ";
	outfile << tree3p.average_search_cost() << endl;
	outfile << "3r average search cost: ";
	outfile << tree3r.average_search_cost() << endl;
	outfile << "4l average search cost: ";
	outfile << tree4l.average_search_cost() << endl;
	outfile << "4p average search cost: ";
	outfile << tree4p.average_search_cost() << endl;
	outfile << "4r average search cost: ";
	outfile << tree4r.average_search_cost() << endl;
	
	ifstream file5l{ "5l" };
	BTree tree5l;
	file5l >> tree5l;
	ifstream file5p{ "5p" };
	BTree tree5p;
	file5p >> tree5p;
	ifstream file5r{ "5r" };
	BTree tree5r;
	file5r >> tree5r;

	ifstream file6l{ "6l" };
	BTree tree6l;
	file6l >> tree6l;
	ifstream file6p{ "6p" };
	BTree tree6p;
	file6p >> tree6p;
	ifstream file6r{ "6r" };
	BTree tree6r;
	file6r >> tree6r;

	ifstream file7l{ "7l" };
	BTree tree7l;
	file7l >> tree7l;
	ifstream file7p{ "7p" };
	BTree tree7p;
	file7p >> tree7p;
	ifstream file7r{ "7r" };
	BTree tree7r;
	file7r >> tree7r;

	ifstream file8l{ "8l" };
	BTree tree8l;
	file8l >> tree8l;
	ifstream file8p{ "8p" };
	BTree tree8p;
	file8p >> tree8p;
	ifstream file8r{ "8r" };
	BTree tree8r;
	file8r >> tree8r;

	ifstream file9l{ "9l" };
	BTree tree9l;
	file9l >> tree9l;
	ifstream file9p{ "9p" };
	BTree tree9p;
	file9p >> tree9p;
	ifstream file9r{ "9r" };
	BTree tree9r;
	file9r >> tree9r;

	ifstream file10l{ "10l" };
	BTree tree10l;
	file10l >> tree10l;
	ifstream file10p{ "10p" };
	BTree tree10p;
	file10p >> tree10p;
	ifstream file10r{ "10r" };
	BTree tree10r;
	file10r >> tree10r;
	outfile << "5l average search cost: ";
	outfile << tree5l.average_search_cost() << endl;
	outfile << "5p average search cost: ";
	outfile << tree5p.average_search_cost() << endl;
	outfile << "5r average search cost: ";
	outfile << tree5r.average_search_cost() << endl;
	outfile << "6l average search cost: ";
	outfile << tree6l.average_search_cost() << endl;
	outfile << "6p average search cost: ";
	outfile << tree6p.average_search_cost() << endl;
	outfile << "6r average search cost: ";
	outfile << tree6r.average_search_cost() << endl;
	outfile << "7l average search cost: ";
	outfile << tree7l.average_search_cost() << endl;
	outfile << "7p average search cost: ";
	outfile << tree7p.average_search_cost() << endl;
	outfile << "7r average search cost: ";
	outfile << tree7r.average_search_cost() << endl;
	outfile << "8l average search cost: ";
	outfile << tree8l.average_search_cost() << endl;
	outfile << "8p average search cost: ";
	outfile << tree8p.average_search_cost() << endl;
	outfile << "8r average search cost: ";
	outfile << tree8r.average_search_cost() << endl;
	outfile << "9l average search cost: ";
	outfile << tree9l.average_search_cost() << endl;
	outfile << "9p average search cost: ";
	outfile << tree9p.average_search_cost() << endl;
	outfile << "9r average search cost: ";
	outfile << tree9r.average_search_cost() << endl;
	outfile << "10l average search cost: ";
	outfile << tree10l.average_search_cost() << endl;
	outfile << "10p average search cost: ";
	outfile << tree10p.average_search_cost() << endl;
	outfile << "10r average search cost: ";
	outfile << tree10r.average_search_cost() << endl;
	
	ifstream file11l{ "11l" };
	BTree tree11l;
	file11l >> tree11l;
	ifstream file11p{ "11p" };
	BTree tree11p;
	file11p >> tree11p;
	ifstream file11r{ "11r" };
	BTree tree11r;
	file11r >> tree11r;

	ifstream file12l{ "12l" };
	BTree tree12l;
	file12l >> tree12l;
	ifstream file12p{ "12p" };
	BTree tree12p;
	file12p >> tree12p;
	ifstream file12r{ "12r" };
	BTree tree12r;
	file12r >> tree12r;


	outfile << "11l average search cost: ";
	outfile << tree11l.average_search_cost() << endl;
	outfile << "11p average search cost: ";
	outfile << tree11p.average_search_cost() << endl;
	outfile << "11r average search cost: ";
	outfile << tree11r.average_search_cost() << endl;
	outfile << "12l average search cost: ";
	outfile << tree12l.average_search_cost() << endl;
	outfile << "12p average search cost: ";
	outfile << tree12p.average_search_cost() << endl;
	outfile << "12r average search cost: ";
	outfile << tree12r.average_search_cost() << endl;
	
}

