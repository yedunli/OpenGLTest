using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Custom{
	private string name;
	private List<int> orders = new List<int> ();
	public Custom(string name)
	{
		this.name = name;
		orders = new List<int> (new int[]{ 1, 1, 2, 3, 5, 8, 13 });
	}

	public void PrintOwing(float previousAmount)
	{
		PrintBanner ();
		var outstanding = GetAmount (previousAmount * 1.2f);
		PrintDetails (outstanding);
	}

	private float GetAmount(float intiValue)
	{
		var result = intiValue;
		foreach (var order in orders) {
			result += order;
		}
		return result;
	}

	private void PrintBanner()
	{
		Debug.Log ("****************************************************");
		Debug.Log ("********************* Banner ***********************");
		Debug.Log ("****************************************************");
			Debug.Log ("*********************对对对*******************************");
		Debug.Log ("*********************44444*******************************");
	}

	private void PrintDetails(float amount)
	{
		Debug.Log ("name : " + name);
		Debug.Log ("amount : " + amount);
	}
}


public class Refactoring : MonoBehaviour {

	private void Test()
	{
		Custom custom = new Custom ("Newton");
		custom.PrintOwing (3.14f);
	}

	private void OnGUI()
	{
		if (GUI.Button (new Rect (0, 0, 100, 30), "Start")) {
			Test ();
		}
	}
}
