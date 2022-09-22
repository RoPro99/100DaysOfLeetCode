vector<int>odd;
vector<int>ev;

for (int i = 0 ; i < nums.size() ; i++)
{
	if (i % 2 == 0)
	{
		ev.push_back(nums[i]);
	} else
	{
		odd.push_back(nums[i]);
	}
}

sort(ev.begin(), ev.end());
sort(odd.begin(), odd.end());

vector<int>ans;
int l1 = 0;
int l2 = nums.size() / 2;
for (int i = 0 ; i < nums.size() ; i++)
{
	if (i % 2 == 0) {
		ans.push_back(ev[l1]);
		l1++;
	}
	else {
		ans.push_back(odd[l2 - 1]);
		l2--;
	}
}
return ans;