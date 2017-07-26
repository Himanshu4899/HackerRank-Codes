import java.util.regex.Matcher;
import java.util.regex.Pattern;

class reg{
	static int match(String str){
		String regex = "10+1";
		
		Pattern p = Pattern.compile(regex);
		
		Matcher m = p.matcher(str);
		int counter =0;
		while(m.find()){
			m.region(m.end()-1,str.length());
			counter++;
		}
	return counter;
	}
		
		public static void main(String[] args){
		
			String str = "1001ab010abc01001";
			System.out.println(match(str));
		}
	}
