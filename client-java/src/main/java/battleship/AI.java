package battleship;

import battleship.messages.FireResult;
import battleship.messages.GameOver;
import battleship.messages.ShipSunk;
import battleship.state.Game;
import battleship.state.Phase;
import battleship.state.Shot;
import battleship.state.Team;

public interface AI {

	// ///////////////////////////////////////////////// //
	// ////////////////// YOUR INPUT /////////////////// //
	// ///////////////////////////////////////////////// //

	/**
	 * Called when you should select a name.
	 * 
	 * @return The name you want to play as.
	 */
	String selectName();

	/**
	 * Called when you should select a team. Note that the team may be full, and
	 * you must wait for the assignedTeam(..) callback below to see what team
	 * you are actually assigned to.
	 * 
	 * @return The team you want to play as. If that slot is already taken, you
	 *         will be called again. Failing too many times will get you kicked.
	 *         Return null or your current team if you don't want to change your
	 *         team.
	 */
	Team selectTeam(final Game gameState);

	/**
	 * Called when it's your turn to make a shot
	 * 
	 * @param gameState
	 *            The current state of the game
	 * 
	 * @param myTeam
	 *            Your team
	 * 
	 * @return The shot you want to make. If you return an invalid (already
	 *         fired there or outside of map) shot enough times you lose the
	 *         game. If you return null you automatically resign.
	 */
	Shot makeShot(final Game gameState);

	// ///////////////////////////////////////////////// //
	// ////////////////// NOTIFICATIONS //////////////// //
	// ///////////////////////////////////////////////// //

	/**
	 * Called when you are assigned to a team.
	 * 
	 * @param team
	 *            The team you will play as (or if observer: Team.OBSERVERS).
	 */
	void assignedTeam(final Team team);

	/**
	 * Called after a valid shot was fired. Lets you know if it was a hit and
	 * who fired the shot. Will be followed by a call to shipSunk(..) if this
	 * also sunk a ship.
	 * 
	 * @param shotResultMsg
	 *            The shot
	 */
	void shotFired(final FireResult shotResultMsg);

	/**
	 * Called when a ship is sunk.
	 * 
	 * @param sinkMsg
	 *            A message containing the information about the sunk ship
	 */
	void shipSunk(final ShipSunk sinkMsg);

	/**
	 * Notifies you that the game is over and who won.
	 * 
	 * @param gameOverMsg
	 */
	void gameOver(final GameOver gameOverMsg);

	/**
	 * Notifies you that the game has entered a new phase
	 * 
	 * @param newPhase
	 *            The new phase of the game
	 */
	void gamePhaseChanged(final Phase newPhase);

}
