class Solution {
public:
    vector<vector<int>> generate(int numRows);
};
/*********************************************************************/
vector<vector<int>> Solution::generate(int numRows) {
    std::size_t r, el;
    vector<vector<int>> v{};
    for (r = 0; r < numRows; ++r) {
        vector<int> aux;
        /* insertion of the first element */
        aux.emplace_back(1);
        /* sum of middle elements if r > 1 */
        if (r > 1) {
            for (el = 0; el < v.at(r-1).size()-1; ++el) {
                aux.emplace_back(v.at(r-1).at(el)+v.at(r-1).at(el+1));
            }
        }
        /* insertion of the last element if r > 0 */ 
        if (r > 0) {
            aux.emplace_back(1);
        }
        /* insertion of the vector aux in the vector of vectors */
        v.emplace_back(aux);
    }
    return v;
}
/*********************************************************************/
