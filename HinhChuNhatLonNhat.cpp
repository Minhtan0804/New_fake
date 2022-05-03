#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int * hist= new int[n];
		
		for (int i = 0; i < n; i++) cin >> hist[i];
		
		// Tao ngan xep rong
		// Ngan xep chi chua cac chi muc mang hist[]
		// Cac thanh duoc luu tru trong ngan xep la 
		// luon theo thu tu chieu cao cua chung tang dan.
		stack<int> st;
		
		long long max_area = 0; // Khoi tao hcn lon nhat
		int top_of_stack; // Luu tru gia tri tren cung cua ngan xep
		long long area_with_top; // Luu tru khu vuc co thanh tren cung 
							// duoi dang thanh nho nhat
		

		// Duyet tat ca cac thanh cua do thi da cho
		int i = 0;
		
		while(i < n)
		{

			// Neu ngan xep rong hoac hist[i] cao hon 
			// thanh o dau ngan xep, day no vao ngan xep
			if (st.empty() || hist[st.top()] <= hist[i])
				st.push(i++);

			// Neu hist[i] nho hon thanh tren cung,
			// loai bo thanh tren cung. Dat thanh nay la hist[top_of_stack]

			else
			{
				top_of_stack = st.top();
				st.pop();

				// sau so tinh dien tich hcn voi ngan xep
				// tren cung la thanh nho nhat (hoac chieu cao toi theu)
				// i la chi muc ben trai cho phan tu tren va
				// phan tu truoc tren cung trong ngan xep la chi so ben phai
				area_with_top = hist[top_of_stack] * (st.empty() ? i :
													i - st.top() - 1);


				// update dien tich lon nhat
				max_area = max(max_area, area_with_top);	
			}
		}
		
		// Day ra cac thanh con lai tu ngan xep va tinh toan 
		// khu vuc co moi thanh bat len la thanh nho nha
		while(!st.empty())
		{
			top_of_stack = st.top();
			st.pop();

			area_with_top = hist[top_of_stack] * (st.empty() ? i :
												i - st.top() - 1);

			max_area = max(max_area, area_with_top);
		}

		cout << max_area << endl;
	}
	return 0;
}

