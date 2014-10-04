
// Remember, sbt needs empty lines between active settings

name := "mgen-battleship-server"

organization := "se.culvertsoft"

version := scala.util.Properties.envOrElse("MGEN_BATTLESHIP_SERVER_VERSION", "SNAPSHOT")

isSnapshot := version.value.contains("SNAPSHOT")

crossPaths := false

resolvers += "Sonatype OSS Snapshots" at "https://oss.sonatype.org/content/repositories/snapshots"

libraryDependencies += "se.culvertsoft" % "mgen-javalib" % "SNAPSHOT"

libraryDependencies += "se.culvertsoft" % "mnet-client" % "SNAPSHOT"

EclipseKeys.withSource := true

// Doesn't work, since MNet requires scala
// autoScalaLibrary := false
// EclipseKeys.projectFlavor := EclipseProjectFlavor.Java