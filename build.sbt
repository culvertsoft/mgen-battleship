
// Remember, sbt needs empty lines between active settings

name := "mgen-battleship"

organization := "se.culvertsoft"

version := scala.util.Properties.envOrElse("MGEN_BATTLESHIP_VERSION", "SNAPSHOT")

isSnapshot := version.value.contains("SNAPSHOT")

crossPaths := false

lazy val battleship_commonjava = project in file("common-java")

lazy val battleship_clientjava = (project in file("client-java")).dependsOn(battleship_commonjava)

lazy val battleship_server = (project in file("server")).dependsOn(battleship_commonjava)

lazy val battleship_testjava = (project in file("test-java")).dependsOn(battleship_commonjava, battleship_clientjava, battleship_server)
