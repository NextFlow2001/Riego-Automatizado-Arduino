🌱 Sistema de Riego Automatizado para Cultivos de Palta en Ayacucho
  
Bienvenido al repositorio oficial del Sistema de Riego Automatizado para Cultivos de Palta en Ayacucho, un proyecto desarrollado por estudiantes de la Universidad Nacional de San Cristóbal de Huamanga. Este sistema optimiza el uso del agua en cultivos de palta mediante tecnologías de automatización, IoT y energía solar, diseñado específicamente para las condiciones semiáridas de Ayacucho, Perú.

  



📖 Descripción del Proyecto
Este proyecto implementa un sistema de riego por goteo automatizado que monitorea la humedad del suelo y la temperatura ambiental en tiempo real, utilizando sensores conectados a un microcontrolador (Arduino o ESP32). El sistema activa válvulas y una bomba de agua según las necesidades del cultivo de palta, alimentado por un panel solar para garantizar sostenibilidad en zonas rurales. 
🎯 Objetivos

Optimizar el uso del agua: Reducir el consumo en un 30% respecto a métodos tradicionales.
Aumentar la productividad: Mejorar el rendimiento de los cultivos de palta en un 20%.
Promover la sostenibilidad: Utilizar energía solar y tecnologías accesibles para comunidades agrícolas.

🌟 Características Principales

📏 Monitoreo en tiempo real de humedad y temperatura.
💧 Riego por goteo automatizado con control PID.
☀️ Alimentación mediante panel solar de 50W con batería de respaldo.
📱 Interfaz simple con pantalla LCD y soporte opcional para monitoreo remoto vía IoT.
🔧 Diseño modular y de bajo costo, adaptable a diferentes cultivos.


🚀 Instalación y Configuración
Sigue estos pasos para configurar el sistema en tu propio entorno:
📋 Requisitos Previos

Hardware:
Microcontrolador Arduino Uno o ESP32
Sensores: YL-69 (humedad), DHT22 (temperatura)
Válvulas solenoides (4), bomba de agua (12V)
Panel solar (50W), batería (12V), regulador de carga
Pantalla LCD 16x2 (opcional)


Software:
Arduino IDE (versión 2.0 o superior)
Bibliotecas: DHT.h para el sensor DHT22


Herramientas:
Computadora con puerto USB
Cables de conexión, protoboard, soldador (opcional)



🛠️ Pasos de Instalación

Clona el repositorio:
git clone https://github.com/tu-usuario/sistema-riego-palta-ayacucho.git
cd sistema-riego-palta-ayacucho


Conecta el hardware:

Sigue el esquema eléctrico en docs/diagrams/esquema_electrico.png.
Conecta los sensores YL-69 a pines analógicos (A0), DHT22 a pin digital (D2), válvulas a D7, bomba a D8.
Configura el panel solar con el regulador y la batería.


Instala las bibliotecas en Arduino IDE:

Ve a Sketch > Include Library > Manage Libraries.
Busca e instala DHT sensor library por Adafruit.


Carga el código:

Abre src/main.ino en Arduino IDE.
Configura los umbrales de humedad (30%) y temperatura (25°C) en el código.
Conecta el microcontrolador vía USB y carga el programa.


Prueba el sistema:

Verifica las lecturas en el monitor serial (9600 baudios).
Asegúrate de que las válvulas y la bomba se activen correctamente al simular condiciones de baja humedad.




  



📁 Estructura del Repositorio
├── docs/                   # Documentación y recursos
│   ├── diagrams/           # Diagramas técnicos
│   │   ├── esquema_electrico.png
│   │   ├── diagrama_flujo.png
│   │   └── plano_riego.png
│   ├── images/             # Imágenes del prototipo
│   │   ├── prototipo_campo.jpg
│   │   ├── montaje_prototipo.jpg
│   │   └── frutos_comparacion.jpg
│   └── manual_usuario.pdf  # Guía de uso
├── src/                    # Código fuente
│   ├── main.ino           # Código principal para Arduino
│   └── config_lcd.ino     # Configuración de la pantalla LCD
├── tests/                  # Pruebas unitarias (futuras)
└── README.md              # Este archivo


🧑‍🌾 Uso del Sistema

Monitoreo:

La pantalla LCD muestra la humedad, temperatura y estado del riego.
Opcionalmente, conecta el ESP32 a una red Wi-Fi para monitoreo remoto vía Blynk o ThingSpeak.


Ajustes:

Modifica los umbrales de riego en el código (setpoint = 30.0 para humedad).
Recalibra los sensores si las lecturas son inconsistentes.


Mantenimiento:

Limpia los sensores cada 3 meses para evitar corrosión.
Verifica la batería y el panel solar anualmente.




📌 Nota: Consulta el manual de usuario para detalles sobre instalación en campo y resolución de problemas.


📊 Resultados y Beneficios

Ahorro de agua: Reducción del 30% (3000 L/ha/mes) comparado con riego por inundación.
Aumento de productividad: 20% más de rendimiento en frutos de palta, con mejor calidad.
Sostenibilidad: Uso de energía solar y diseño de bajo costo, ideal para comunidades rurales.
Facilidad de uso: Interfaz intuitiva y mantenimiento mínimo, adoptado por agricultores tras capacitación básica.


  



🤝 Contribuciones
¡Tu aporte es bienvenido! Si deseas contribuir al proyecto, sigue estos pasos:

Haz un fork del repositorio.
Crea una nueva rama: git checkout -b mi-contribucion.
Realiza tus cambios y haz commit: git commit -m "Descripción clara de los cambios".
Envía un pull request con una descripción detallada.

Por favor, revisa nuestro Código de Conducta antes de contribuir.
📝 Tareas Pendientes

 Integrar alertas por SMS para zonas sin Wi-Fi.
 Implementar machine learning para predicción de riego.
 Desarrollar pruebas unitarias en el directorio tests/.


📚 Referencias
Este proyecto se basa en investigaciones recientes sobre riego de precisión y automatización agrícola:

Abioye, E. A., et al. (2022). Precision irrigation management using machine learning and digital farming solutions. AgriEngineering, 4(1), 6. DOI
Cárceles Rodríguez, B., et al. (2023). Irrigation alternatives for avocado in the Mediterranean subtropical region. Agriculture, 13(5), 1049. DOI
Erazo-Mesa, E., et al. (2024). IS-SAR: An irrigation scheduling web application for Hass avocado orchards. Irrigation Science. DOI
Ramírez-Guerrero, T., et al. (2023). Agroclimatic and phytosanitary events in avocado crops. Agronomy, 13(8), 1976. DOI
Saputri, F. R., et al. (2025). Irrigation monitoring and control system based on Blynk IoT and ThingSpeak. PLoS ONE, 20(4), e0321250. DOI


📜 Licencia
Este proyecto está licenciado bajo la Licencia MIT. Siéntete libre de usar, modificar y distribuir el código, siempre que se incluya el aviso de copyright y la licencia.

👥 Equipo
Desarrollado por estudiantes de la Universidad Nacional de San Cristóbal de Huamanga, Facultad de Ingeniería de Sistemas:

Franz Danilo Morote Jayacc  
Kevin Andy Quispe Carpio  
Yuan Raymond Retamozo Vilca  
Miguel Feliciano Ramírez Gonzales  
Aldahir Kenedin Ubilluz García

Docente: Ing. Fiorella Luque MendietaCurso: Control y Automatización de ProcesosAño: 2025

📧 Contacto
Para preguntas, sugerencias o colaboración, contáctanos:

📩 Email: tu-email@unsch.edu.pe
🌐 Repositorio: github.com/tu-usuario/sistema-riego-palta-ayacucho
🐦 X: @tu-cuenta


  ¡Juntos, transformemos la agricultura en Ayacucho! 🌴💧
