/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector < vector < int > > Solution::verticalOrderTraversal(TreeNode * A) {
  vector < vector < int > > result;
  // Base case
  if (!A) return result;
  // Create a Hash map of horizontalDistance, ListOfTreeNodes(at that horizontalDistance)
  unordered_map < int, vector < int > > m;

  // Create queue to do level order traversal.
  // Every item of queue contains node and horizontal distance.
  queue < pair < TreeNode * , int > > q;
  q.push(make_pair(A, 0)); // root's horizontalDistance is zero
  int min_dist = 0, max_dist = 0;
  while (!q.empty()) {
    // get the queue front
    pair < TreeNode * , int > front = q.front();
    q.pop();
    int currentHorizontalDistance = front.second;
    // Maintain minimum and maximum horizontal Distance
    min_dist = min(min_dist, currentHorizontalDistance);
    max_dist = max(max_dist, currentHorizontalDistance);
    TreeNode * currentTreeNode = front.first;

    // insert current node to hash map
    m[currentHorizontalDistance].push_back(currentTreeNode -> val);

    if (currentTreeNode -> left != NULL) {
      q.push(make_pair(currentTreeNode -> left, currentHorizontalDistance - 1));

    }
    if (currentTreeNode -> right != NULL) {
      q.push(make_pair(currentTreeNode -> right, currentHorizontalDistance + 1));
    }
  }
  // Traverse the map and print nodes at every horigontal distance
  for (int i = min_dist; i <= max_dist; i++) {
    result.push_back(m[i]);
  }
  return result;
}
