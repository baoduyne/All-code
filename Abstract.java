abstract class company{
	protected String name_company = "Phenikaa";
    
    	public abstract void changename(String inp);
   		public String get(){
        return this.name_company;
        }
}

class employee extends company{
	protected String name = "??";
    
    public employee(String i){
     this.name = i;
    }
    public void changename(String inp){
    	name_company = inp;
    }
    
    public String get_em(){
    	return this.name;
    }

}

class Abstract{
	public static void main(String[] args){
    	employee obj = new employee("Duy");
        	obj.changename("PKA");
            	System.out.println("Company: " + obj.get());
                System.out.println("Employee: "+ obj.get_em());
    }
}
