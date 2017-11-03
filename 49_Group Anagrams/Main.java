import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
class Solution {
	public List<List<String>> groupAnagrams(String[] strs) {
//		List<List<String>> ans = new ArrayList<>();
		//lc里面一定要判断这个
		if (strs.length == 0)
			return new ArrayList();
		Map<String, List<String>> mp = new HashMap<String, List<String>>();
		
		for(int i = 0; i < strs.length; i++) {
			char tmpArray[] = strs[i].toCharArray();
			//把字符排序
			Arrays.sort(tmpArray);
			String SortString = String.valueOf(tmpArray);
//			String tmpString = new String(tmpArray);
			
			if(mp.containsKey(SortString)) {
				mp.get(SortString).add(strs[i]);
			}
			else {
				List<String>tmpList = new ArrayList<String>();
				tmpList.add(strs[i]);
				mp.put(SortString, tmpList);
			}
		}
		
		//获取所有的mp映射值动态数组
//		Iterator iter = mp.values().iterator();
//		while(iter.hasNext()) {
//			List<String> tmpList = new ArrayList<String>((ArrayList<String>)iter.next());
//			ans.add(tmpList);
//		}
		return new ArrayList(mp.values());
	}
}

public class Main {

	
	public static void main(String[] args) {
		Solution s  = new Solution();
		String[] ss = {"eat", "tea", "tan", "ate", "nat", "bat"};
		System.out.println(s.groupAnagrams(ss));
	}

}
