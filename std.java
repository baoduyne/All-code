
import java.util.*;



class School {

    protected String name = "";

        public void set_name(String name){
            this.name = name;
        }

        public String get_name(){
            return name;
        }
}

class student extends School{

    protected String name = "";
    protected int id = 0;
    protected String school = "";

        public student(String n , int i , String sc){
            this.name = n ; this.id = i ; this.school = sc;
        }
        public void set_name_std(String name){
            this.name = name;
        }

        public void set_id_std(int id){
            this.id = id;
        }

        public void set_school(){
            this.school = get_name();
        }

        public String get_name_std(){
            return name;
        }

        public int get_id_std(){
            return id;
        }
}


public class std {
    public static void main(String[] args){
        Scanner scn =  new Scanner(System.in);
        student std = new student("",0,"");
        System.out.println("Name school: ");
        String txt = scn.nextLine();
        
        std.set_name(txt);
        std.set_school();

        List<student> vtc = new Vector<>(3);

       
              
              System.out.print("Name: ");std.set_name_std(scn.nextLine());  
              System.out.print("ID: ");std.set_id_std(scn.nextInt());
                System.out.println(std.get_name_std());
                System.out.println(std.get_id_std());
                            vtc.add(std);


            
                            for (student students : vtc) {
                                System.out.println(students);
                            }
            

    }
}
