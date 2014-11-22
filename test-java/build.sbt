
// Remember, sbt needs empty lines between active settings

name := "mgen-battleship-testjava"

organization := "se.culvertsoft"

version := scala.util.Properties.envOrElse("MGEN_BATTLESHIP_VERSION", "SNAPSHOT")

scalaVersion := "2.11.4"

isSnapshot := version.value.contains("SNAPSHOT")

crossPaths := false

resolvers += "Sonatype OSS Snapshots" at "https://oss.sonatype.org/content/repositories/snapshots"

libraryDependencies += "se.culvertsoft" % "mgen-javalib" % "SNAPSHOT"

libraryDependencies += "se.culvertsoft" % "mnet-client" % "SNAPSHOT"

libraryDependencies += "se.culvertsoft" % "mgen-battleship-javacommon" % version.value

libraryDependencies += "se.culvertsoft" % "mgen-battleship-javaclient" % version.value

libraryDependencies += "se.culvertsoft" % "mgen-battleship-server" % version.value

libraryDependencies += "com.novocode" % "junit-interface" % "0.10" % Test

EclipseKeys.withSource := true

