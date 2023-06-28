# TFG_MS_ROS2 :robot:
## Resumen y distribución de los archivos.

El Proyecto esta divido en tres partes, que son las diferentes carpetas dentro del repositorio. Cada una de las carpetas cumple una función, la primera "Docker" es para compilar la imagen de forma local si se quiere debido a que el docker compose descarga esta misma imagen haciendo un pull del repo de Docker.
Las dos últimas carpetas son el codigo del proyecto, "MS_ROS_V0.1" es donde se encuentra la API que gestiona las llamadas al backend que se la redirige a cada microservicio, que se encuentran en "ros_ws" se trata de un workspace de ROS2 y acontinuación veremos como ejecutar los microservicios.

## Ejecutar proyecto (Local)
Es necesario tener instalado ROS2 (recomendado humble pero vale cualquier versión de ROS2), para poder ejcutarlo se necesita compilarlos con `colcon build`.
Para cada uno de los comandos se ejecutan en diferentes terminales y para cada terminal abierta situarse en `cd <path_of_repo_save_dest>/ros_ws` y tambien ejecutar `source install/setup.sh`

**1. Esto sirve para lanzar gazebo es decir la simulación del robot.**
```shell
export TURTLEBOT3_MODEL=waffle_pi
ros2 launch turtlebot3_gazebo turtlebot3_world.launch.py
```

**2. Esto sirve para que el robot sea autonomo.**
```shell
ros2 run turtlebot3_gazebo turtlebot3_drive
```
**3. Lanza el microservicio publiser de batería.**
```shell
ros2 run ms_sub battery_publisher
```
**4. Lanza el microservicio batería.**
```shell
ros2 run ms_sub battery_subscriber
```
**5. Lanza el microservicio odometría.**
```shell
ros2 run ms_sub odom_suscriber
```
Por ultimo en la carpeta `cd <path_of_repo_save_dest>/MS_ROS_V0.1` ejecutamos la api:

```shell
go run main.go
```
Para saber los endpoints:
```shell
curl --location 'http://127.0.0.1:8080/discover'
```
## Ejecutar proyecto (Docker)

- Instalar vcxsrv (Windows)
  
  Descargar el archivo [VCXSRV](https://sourceforge.net/projects/vcxsrv/) y luego a continuación ejecutar el xLauch que se crea poniendo "0 en vez de "-1" y darle a siguiente hasta finalizar.
  Y continuar con el docker compose

- Instalar Nvidia Docker Support, si tiene una tarjeta gráfica de nvidia (Linux)
```shell
distribution=$(./etc/os-release;echo $ID$VERSION_ID) && curl -s -L https://nvidia.github.io/nvidia-docker/gpgkey | sudo apt-key add - && curl -s -L https://nvidia.github.io/nvidia-docker/$distribution/nvidia-docker.list | sudo tee /etc/apt/sources.list.d/nvidia-docker.list
sudo apt update
sudo apt install -y nvidia-docker2
sudo systemctl restart docker
```
### Docker Compose 
Antes de hacer el `sudo docker compose up` para ejecutar el programa, ha de modificar el archivo `docker-compose.yml` en función de donde lo vaya a ejecutar es decir Linux o Windows.
Indicado en el código  por unos comentarios, es decir comentar o descomentar lo que se desee en función del sistema operativo a ejecutar en.
![Docker_Compose](https://github.com/JavierRenero/TFG_MS_ROS/assets/47631050/b5513acf-985b-487b-9169-1b4305036db1)


Una vez tengamos la configuración correcta solo haria falta ejecutar:

***LINUX***
```shell
sudo docker compose up
```
***WINDOWS***
```shell
docker compose up
```
### Docker Build (imagen en local)

```shell
cd <path_of_repo_save_dest>/Docker
sudo docker build -t javier8renero/tfg_ms:humble .
```

