package battleship;

import battleship.messages.FireResult;
import battleship.messages.GameOver;
import battleship.messages.ShipSunk;
import battleship.state.Game;
import battleship.state.Shot;
import battleship.state.Team;

public interface AI {

	// ///////////////////////////////////////////////// //
	// ////////////////// YOUR INPUT /////////////////// //
	// ///////////////////////////////////////////////// //

	/**
	 * Called when you should select a team.
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
	 * @return The team you will play as (or if observer: Team.OBSERVERS).
	 */
	void assignedTeam(final Team team);

	/**
	 * Called after a valid shot was fired. Lets you know if it was a hit and
	 * who fired the shot. Will be followed by a call to shipSunk(..) if this
	 * also sunk a ship.
	 * 
	 * @param shot
	 *            The shot
	 */
	void shotFired(final FireResult shot);

	/**
	 * Called when a ship is sunk.
	 * 
	 * @param sink
	 *            A message containing the information about the sunk ship
	 */
	void shipSunk(final ShipSunk sink);

	/**
	 * Notifies you that the game is over and who won.
	 * 
	 * @param gameState
	 * @param gameOverMsg
	 */
	void gameOver(final Game gameState, final GameOver gameOverMsg);

}
