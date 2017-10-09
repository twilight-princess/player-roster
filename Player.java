public class Player
{
	private String fName;
	private String lName;
	private String jNumb;

	// default constructor 
	public Player()
	{
		
	}
	
	public Player(String fName, String lName, String jNumb)
	{
		this.fName = fName;
		this.lName = lName;
		this.jNumb = jNumb;
	}
	
	public String getList()
	{
		return (jNumb + ") " + fName + " " + lName);
	}

	public void setFName(String fName)
	{
		this.fName = fName;
	}
	
	public void setLName(String lName)
	{
		this.lName = lName;
	}

	public void setJNumb(String jNumb)
	{
		this.jNumb = jNumb;
	}
}


