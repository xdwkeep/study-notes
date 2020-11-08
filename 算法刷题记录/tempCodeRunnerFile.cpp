class Solution {
public:
    int trap(vector<int>& height) {
		stack<int> st;
		int ans = 0;
		for (int i = 0; i < height.size(); ++i) {
			while (!st.empty() && height[st.top()] < height[i]) {
				// 弹出栈顶小的
				int cur = st.top();
				st.pop();
				if (st.empty()) {
					break;
				}
				int l = st.top();
				int r = i;
				// 计算的是cur高度以上的面积，因为cur以下的前面的while循环已经计算了
				int h = min(height[l], height[r]) - height[cur];
				ans += h * (r - l -1);
			}
			st.push(i);
		}

		return ans;
    }
};