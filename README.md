# Bot-Matrix-problem
Will find the path for bot to deliver food from the specified exit door, of the kitchen with multiple exit doors to the specified table.

The files with suffix "_bfs_dfs" are used to find the solutions in both bfs and dfs algorithms. If you use the header, client and implementation files with "_bfs_dfs" suffix, two output files will be created.
1) outbfs.txt - Solution using bfs algorithm
2) outbfs.txt - Solution using dfs algorithm

Use the same input file (input.txt) for both of them.

A particular ‘RPA’ firm is in the process of developing a restaurant which has bot 
waiters. Bot needs to deliver the food from the specified exit door, of the kitchen 
with multiple exit doors to the specified table.
The restaurant has blocked areas where Bot cannot move and the passages 
where it can move. The layout of restaurant can be rectangular or square.
Layout map can be considered as a matrix of cells where cell with ‘0’ represents 
the passage and cell with ‘1’, the blocked area. Bot has memorised this map in 
a particular format for faster processing. Given a particular table location bot 
needs to find the path from the kitchen from the specified exit door to the table 
to serve the customer. Bot has a constraint it can move only in either right or 
down direction one step at a time (i.e. only to the adjacent cell in right or down 
direction provided it is not blocked) with first preference to right direction.
Layout matrix is stored in the file input.txt
The code will help the bot with the path form specific exit 
door of the kitchen to the mentioned table if there exists the one. If multiple 
paths exists the code will find any one.

1) Readmap:
Layout matrix consists for ‘0’ (allowed for moving) and ‘1’ (Blocked area)
The code will read the layout matrix from the file input.txt (file reading)
and store as multilist data structure (Reference multilinked list
representation of sparse matrix).
The code will scan layout matrix and create node whenever ‘0’ is encountered 
in input file. Node will maintain x coordinate, y coordinate (coordinate 
position with respect to input file, indexing starts from 0) for each location 
with ‘0’ value, link to the next node in the same row, link to the next node in 
the same column.

2. Find path:
The code will help the bot to find path from the start point to the end point if one exists.
The code will access data only from the created multilinked list structure. The code
provides iterative implementation for this functionality. The code will use an auxiliary data structure to hold the 
nodes. There could be multiple paths, the code will find out any one of the available paths which satisfies the constraint.

3. Store path: 
The code will create output file out.txt.
If path exits, the code will store path coordinates in sorted order 
(ascending order of x, for each x ascending order of y) (No other format for 
output is accepted). If no path exists ‘-1’ should be stored in output file.

Input file description:
First line indicates the start point for the Bot, second line termination point, 3rd
line onwards represent the layout matrix.

How to run:
Compile both the client and implementation file separetly.
Then link both the files.
Then run the executable file.


Note:
Don't mix up the files with brute force algorithm and files with "_bfs_dfs" algorithm.
Remember to see the suufix of the file names and then run the necessary files appropriately.
Use the same input file (input.txt) for both of them.


