using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cargar : MonoBehaviour {
    
    const string modalis = "mo";
    const string mluchin = "ml";
    const string msteve = "ms";

    // Use this for initialization
    void Start () {
        FileData GameData = FileData.Create("GameDataFile");
        int cond;

        if (GameData.Load())
        {
            cond = 1;
        }
        else
        {
            cond = 0;
        }

        if (cond == 0)
        {
            GameData.Set(modalis, 0);
            GameData.Set(mluchin, 0);
            GameData.Set(msteve, 0);
            if (GameData.Save()) Debug.Log("Datos guardados con exito");
            else Debug.Log("Error al guardar datos");
            PlayerPrefs.SetInt("Odalis", (int)GameData.Get(modalis));
            PlayerPrefs.SetInt("Luis", (int)GameData.Get(mluchin));
            PlayerPrefs.SetInt("Steve", (int)GameData.Get(msteve));
        }
        else
        {
            if (GameData.Load())
            {
                PlayerPrefs.SetInt("Odalis", (int)GameData.Get(modalis));
                PlayerPrefs.SetInt("Luis", (int)GameData.Get(mluchin));
                PlayerPrefs.SetInt("Steve", (int)GameData.Get(msteve));
            }
            else Debug.Log("Error al cargar datos");
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
