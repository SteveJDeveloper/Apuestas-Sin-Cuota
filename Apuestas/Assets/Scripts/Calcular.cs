using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Linq;

public class Calcular : MonoBehaviour {

    public GameObject Primero;
    public GameObject Segundo;
    public GameObject Tercero;
    public GameObject M1;
    public GameObject M2;
    public GameObject M3;
    public GameObject Cuota;
    public GameObject GanadorO;
    public GameObject GanadorL;
    public GameObject GanadorS;

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void Calculo() {

        int marcador1, marcador2, marcador3, cuota;

        cuota = int.Parse(Cuota.GetComponent<InputField>().text);
        marcador1 = PlayerPrefs.GetInt("Odalis");
        marcador2 = PlayerPrefs.GetInt("Luis");
        marcador3 = PlayerPrefs.GetInt("Steve");
        
        if (GanadorO.GetComponent<Toggle>().isOn)
        {
            marcador1 = marcador1 + cuota;
        }
        if (GanadorL.GetComponent<Toggle>().isOn)
        {
            marcador2 = marcador2 + cuota;
        }
        if (GanadorS.GetComponent<Toggle>().isOn)
        {
            marcador3 = marcador3 + cuota;
        }

        PlayerPrefs.SetInt("Odalis", marcador1);
        PlayerPrefs.SetInt("Luis", marcador2);
        PlayerPrefs.SetInt("Steve", marcador3);
        Actualizar();

    }

    private void Cargador()
    {
        const string modalis = "mo";
        const string mluchin = "ml";
        const string msteve = "ms";
        int marcador1, marcador2, marcador3;
        marcador1 = PlayerPrefs.GetInt("Odalis");
        marcador2 = PlayerPrefs.GetInt("Luis");
        marcador3 = PlayerPrefs.GetInt("Steve");
        FileData GameData = FileData.Create("GameDataFile");
        GameData.Set(modalis, marcador1);
        GameData.Set(mluchin, marcador2);
        GameData.Set(msteve, marcador3);
        if (GameData.Save()) Debug.Log("Datos guardados con exito");
        else Debug.Log("Error al guardar datos");
    }

    private void Actualizar()
    {
        int marcador1, marcador2, marcador3;

        marcador1 = PlayerPrefs.GetInt("Odalis");
        marcador2 = PlayerPrefs.GetInt("Luis");
        marcador3 = PlayerPrefs.GetInt("Steve");

        if (marcador1 > marcador2)
        {
            if (marcador1 > marcador3)
            {
                if (marcador3 > marcador2)
                {
                    Primero.GetComponent<Text>().text = "Odalis";
                    Segundo.GetComponent<Text>().text = "Steve";
                    Tercero.GetComponent<Text>().text = "Luis";
                    M1.GetComponent<Text>().text = marcador1.ToString();
                    M2.GetComponent<Text>().text = marcador3.ToString();
                    M3.GetComponent<Text>().text = marcador2.ToString();
                }
                else
                {
                    Primero.GetComponent<Text>().text = "Odalis";
                    Segundo.GetComponent<Text>().text = "Luis";
                    Tercero.GetComponent<Text>().text = "Steve";
                    M1.GetComponent<Text>().text = marcador1.ToString();
                    M2.GetComponent<Text>().text = marcador2.ToString();
                    M3.GetComponent<Text>().text = marcador3.ToString();
                }
            }
            else
            {
                Primero.GetComponent<Text>().text = "Steve";
                Segundo.GetComponent<Text>().text = "Odalis";
                Tercero.GetComponent<Text>().text = "Luis";
                M1.GetComponent<Text>().text = marcador3.ToString();
                M2.GetComponent<Text>().text = marcador1.ToString();
                M3.GetComponent<Text>().text = marcador2.ToString();
            }
        }
        else
        {
            if (marcador2 > marcador3)
            {
                if (marcador3 > marcador1)
                {
                    Primero.GetComponent<Text>().text = "Luis";
                    Segundo.GetComponent<Text>().text = "Steve";
                    Tercero.GetComponent<Text>().text = "Odalis";
                    M1.GetComponent<Text>().text = marcador2.ToString();
                    M2.GetComponent<Text>().text = marcador3.ToString();
                    M3.GetComponent<Text>().text = marcador1.ToString();
                }
                else
                {
                    Primero.GetComponent<Text>().text = "Luis";
                    Segundo.GetComponent<Text>().text = "Odalis";
                    Tercero.GetComponent<Text>().text = "Steve";
                    M1.GetComponent<Text>().text = marcador2.ToString();
                    M2.GetComponent<Text>().text = marcador1.ToString();
                    M3.GetComponent<Text>().text = marcador3.ToString();
                }
            }
            else
            {
                Primero.GetComponent<Text>().text = "Steve";
                Segundo.GetComponent<Text>().text = "Luis";
                Tercero.GetComponent<Text>().text = "Odalis";
                M1.GetComponent<Text>().text = marcador3.ToString();
                M2.GetComponent<Text>().text = marcador2.ToString();
                M3.GetComponent<Text>().text = marcador1.ToString();
            }
        }
    }
}
