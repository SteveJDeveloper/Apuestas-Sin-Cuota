using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Prueba : MonoBehaviour {

    public GameObject Primero;
    public GameObject Segundo;
    public GameObject Tercero;
    public GameObject M1;
    public GameObject M2;
    public GameObject M3;
    
    // Use this for initialization
    void Start() {

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
                Segundo.GetComponent<Text>().text = "Odalis";
                Tercero.GetComponent<Text>().text = "Luis";
                M1.GetComponent<Text>().text = marcador3.ToString();
                M2.GetComponent<Text>().text = marcador2.ToString();
                M3.GetComponent<Text>().text = marcador1.ToString();
            }
        }

        
    }
	
	// Update is called once per frame
	void Update () {
        
    }
    
}
