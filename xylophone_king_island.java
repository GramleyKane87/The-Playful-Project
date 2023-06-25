import java.util.*;
 
public class PlaygroundDesign {
 
	public static void main(String[] args) {
 
		// create a list to store playground equipment
		List<String> playgroundEquipment = new ArrayList<String>();
 
		//add different playground equipment to the list
		playgroundEquipment.add("slide");
		playgroundEquipment.add("swing");
		playgroundEquipment.add("trampoline");
		playgroundEquipment.add("sandbox");
		playgroundEquipment.add("jungle gym");
		playgroundEquipment.add("rock wall");
		playgroundEquipment.add("zip line");
 
		//create a list to store playground amenities
		List<String> playgroundAmenities = new ArrayList<String>();
 
		//add different playground amenities to the list 
		playgroundAmenities.add("benches");
		playgroundAmenities.add("picnic table");
		playgroundAmenities.add("drinking fountain");
		playgroundAmenities.add("shade structure");
		playgroundAmenities.add("trash cans");
 
		//create a list to store accessible features 
		List<String> accessibleFeatures = new ArrayList<String>();
 
		//add different accessible features to the list 
		accessibleFeatures.add("wheelchair ramp");
		accessibleFeatures.add("hand railings");
		accessibleFeatures.add("transfer platform");
		accessibleFeatures.add("sensory panels");
		accessibleFeatures.add("rubber safety surfacing");
 
		//create a playground design initiative
		System.out.println("A playground design initiative that creates innovative and inclusive play spaces for children of all ages and abilities.");
 
		//design a playground for children of all ages and abilities
		System.out.println("Designing a playground for children of all ages and abilities...");
		System.out.println("Playground equipment: " + playgroundEquipment);
		System.out.println("Playground amenities: " + playgroundAmenities);
		System.out.println("Accessible features: " + accessibleFeatures);
		System.out.println("Finished!");
	}
 
}