
// Remember, sbt needs empty lines between active settings

name := "mgen-battleship-javacommon"

organization := "se.culvertsoft"

version := scala.util.Properties.envOrElse("MGEN_BATTLESHIP_VERSION", "SNAPSHOT")

scalaVersion := "2.11.4"

isSnapshot := version.value.contains("SNAPSHOT")

crossPaths := false

resolvers += "Sonatype OSS Snapshots" at "https://oss.sonatype.org/content/repositories/snapshots"

libraryDependencies += "se.culvertsoft" % "mgen-javalib" % "SNAPSHOT"

libraryDependencies += "se.culvertsoft" % "mnet-client" % "SNAPSHOT"

EclipseKeys.withSource := true

// Doesn't work, since MNet requires scala
// autoScalaLibrary := false
// EclipseKeys.projectFlavor := EclipseProjectFlavor.Java
