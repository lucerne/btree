/*
* Cache Conscious B+tree in C++
* assume a page size of 4096 B
*
* Trees is to build the index structure level by level. We allocate space for 
* all the leaf entries. We then calculate how many nodes are needed in the 
* higher level and then allocate a continuous chunk of space for all the nodes 
* in this level. We then fill in the entries of nodes in the higher level by 
* copying the largest value in each node in the lower level.
*
* Ref: Making B+-Trees Cache Conscious in Main Memory
*/
class B-tree 
	
	/*  
	* Data: a block of memory, with root, branches (only keys), leaves (only values) 
	*/
	array of Data 

	/*
	*  OPTIONAL: consider Page constraints, variation 
	*/

	/*
	*  build the index structure level by level. We allocate space for all the 
	* leaf entries. We then calculate how many nodes are needed in the higher 
	* level and then allocate a continuous chunk of space for all the nodes in 
	* this level. We then fill in the entries of nodes in the higher level by 
	* copying the largest value in each node in the lower level
	*/
	intialization 

	/*
	*  add the o↵set of K to the first-child pointer to get the address of the 
	* child node.
	*/
	search 


	/*
	* Once the corresponding leaf entry is located, we determine if there is 
	* enough room in the leaf node. If there is, we simply put the new key in the 
	* leaf node. Otherwise, we have to split the leaf node.
	* 
	* Type 1 : Let f be the first-child pointer in p, and let g be the node-group 
	* pointed to by f. We create a new node group g0 with one more node than g. 
	* All the nodes from g are copied into g0, with the node in g that was split 
	* resulting in two nodes within g0. We then update the first child pointer f 
	* in p to point to g0, and de-allocate g.
	*
	* Type 2 : we have to create a new node group g0 and redistribute the nodes 
	* in g evenly between g and g0. Half the keys of p are transferred to a new 
	* node p0, whose first-child pointer is set to g0. To achieve this split of 
	* p into p and p0, the node-group containing p must be copied as in the first 
	* case above, or, if that node group is also full, we need to recursively 
	* split the parent of p.
	*
	*/
	insertion


	/*
	 * delete by merge half-full nodes. Decrease B-tree level by one by merging the 
	 * two children of the root. 
	 *
	 */
	deletion 



