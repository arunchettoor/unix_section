import java.io.*;
import java.util.*;
class FindFile 
{
	public static List<File> fileList = new ArrayList<File>();
	public static List<File> findFile(String name,File file) {
		File[] list = file.listFiles();
		//static List<File> fileList = new ArrayList<File>();
		if(list!=null)
		for (File fil : list){
			if (fil.isDirectory()){
				findFile(name,fil);
			}
			else if (name.matches(".*"+fil.getName()+".*")){
				System.out.println(fil.getParentFile()+"/"+fil.getName());
				fileList.add(fil);
			}

		}
		return fileList;
						    }
	public static void main(String[] args) throws IOException{
		FindFile ff = new FindFile();
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter the file name to be searched : " );
		String name = scan.next();
		System.out.println("Enter the directory where to search : ");
		String directory = scan.next();
		System.out.println("\n The File names found are :\n");
		List<File> fileList =  ff.findFile(name,new File(directory));
		FileWriter write = new FileWriter("fileNames.txt",false);
		PrintWriter print_line = new PrintWriter(write);
		for(File fileCurr : fileList)
			print_line.printf(fileCurr.getParentFile()+"/"+fileCurr.getName()+"\n");	
      print_line.close();
     System.out.println("\n The file names are witten in fileNames.txt file.\n"); 
	}
}
