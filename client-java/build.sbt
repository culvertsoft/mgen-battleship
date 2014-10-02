
// Remember, sbt needs empty lines between active settings

name := "mgen-battleship-javaclient"

organization := "se.culvertsoft"

version := scala.util.Properties.envOrElse("MGEN_BATTLESHIP_JAVASCLIENT_VERSION", "SNAPSHOT")

isSnapshot := version.value.contains("SNAPSHOT")

crossPaths := false

resolvers += "Sonatype OSS Snapshots" at "https://oss.sonatype.org/content/repositories/snapshots"

libraryDependencies += "se.culvertsoft" % "mgen-javalib" % "SNAPSHOT"

libraryDependencies += "se.culvertsoft" % "mnet-client" % "SNAPSHOT"

EclipseKeys.withSource := true
