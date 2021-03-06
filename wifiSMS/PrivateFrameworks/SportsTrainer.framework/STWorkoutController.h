/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */



@interface STWorkoutController : NSObject 
{
    NSInteger _workoutState;
    NSInteger _workoutType;
    NSInteger _calibrationType;
    NSInteger _workoutPreset;
    float _customWorkoutDuration;
    float _customWorkoutDistance;
    NSInteger _customWorkoutCalories;
    double _elapsedWorkoutTime;
    NSInteger _distanceUnits;
    BOOL _skipNextEmpedSearch;
}

@property(readonly) float workoutGoal;
@property(readonly) NSInteger distanceUnits;
@property(readonly) BOOL isExternalReceiverRequired;
@property(readonly) BOOL isExternalReceiverAttached;
@property(readonly) BOOL isLinkedToEmped;
@property(readonly) BOOL isLinkedToRemote;
@property(readonly) NSString *empedSerialNumber;
@property(readonly) BOOL isCalibratedForWalk;
@property(readonly) BOOL isCalibratedForRun;
@property BOOL skipNextEmpedSearch; /* unknown property attribute: V_skipNextEmpedSearch */
@property NSInteger calibrationType; /* unknown property attribute: V_calibrationType */
@property NSInteger workoutPreset; /* unknown property attribute: V_workoutPreset */
@property NSInteger workoutType; /* unknown property attribute: V_workoutType */
@property NSInteger workoutState; /* unknown property attribute: V_workoutState */

+ (id)sharedWorkoutController;

- (id)init;
- (void)dealloc;
- (void)resync;
- (void)resyncWorkoutStateOnly;
- (void)startWorkout;
- (void)cancelWorkout;
- (void)pauseWorkout;
- (void)resumeWorkout;
- (void)stopWorkout;
- (void)togglePauseResumeWorkoutFromHeadset;
- (BOOL)hasPowerSong;
- (id)powerSongName;
- (id)powerSongPersistentUIDString;
- (void)playPowerSong;
- (void)playOnDemandPrompt;
- (void)setWorkoutType:(NSInteger)arg1;
- (void)setWorkoutPreset:(NSInteger)arg1;
- (void)setCustomWorkoutDuration:(float)arg1;
- (void)setCustomWorkoutDistance:(float)arg1;
- (void)setCustomWorkoutCalories:(NSInteger)arg1;
- (float)workoutGoal;
- (NSInteger)distanceUnits;
- (id)latestWorkoutProgress;
- (id)latestWorkoutSummary;
- (BOOL)requestAllWorkoutSummaries;
- (void)_copyAllWorkoutSummaries;
- (void)saveCurrentWorkout;
- (id)bestWorkoutTimes;
- (id)workoutTotals;
- (BOOL)isExternalReceiverRequired;
- (BOOL)isExternalReceiverAttached;
- (BOOL)isLinkedToEmped;
- (BOOL)isLinkedToRemote;
- (void)startEmpedLinking;
- (void)startRemoteLinking;
- (void)stopEmpedLinking;
- (void)activateServerResources;
- (void)deactivateServerResources;
- (BOOL)areServerResourcesActivated;
- (id)herculesSynchedWorkoutFilePath;
- (id)empedSerialNumber;
- (BOOL)isCalibratedForWalk;
- (BOOL)isCalibratedForRun;
- (BOOL)doStandardCalibrationFromCurrentWorkout;
- (BOOL)calibrateFromCurrentWorkoutWithAdjustedDistance:(float)arg1;
- (void)resetCalibration;
- (void)resetCalibrationForType:(NSInteger)arg1;
- (id)elapsedWorkoutTimeFormattedString;
- (id)mainButtonStringForCurrentWorkout;
- (id)stringQuantificationForWorkoutType:(NSInteger)arg1 preset:(NSInteger)arg2;
- (id)shortDescriptionForWorkoutType:(NSInteger)arg1 preset:(NSInteger)arg2;
- (void)_headphoneJackConnectionDidChange:(id)arg1;
- (void)_avSystemControllerDied:(id)arg1;
- (void)_iapServerDied;
- (void)_iapServerWillExit:(id)arg1;
- (void)_receiverStateChanged:(id)arg1;
- (void)_sportsInfoArrived:(id)arg1;
- (void)_empedLinkingStateChanged:(id)arg1;
- (void)_remoteLinkingStateChanged:(id)arg1;
- (void)_empedSearchingStateChanged:(id)arg1;
- (void)_serverResourcesStateChanged:(id)arg1;
- (void)_externalReceiverDisconnected:(id)arg1;
- (void)startSearchingForEmped;
- (void)stopSearchingForEmped;
- (void)unlinkRemote;
- (void)_startWorkoutEventFromRemote:(id)arg1;
- (void)_stopWorkoutEventFromRemote:(id)arg1;
- (void)_playPowerSongEventFromRemote:(id)arg1;
- (void)_togglePauseResumeEventFromRemote:(id)arg1;
- (void)_postNotificationName:(id)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (NSInteger)presetForWorkoutType:(NSInteger)arg1 parameter:(float)arg2;
- (NSInteger)_workoutStateForTrainerState:(NSInteger)arg1;
- (NSInteger)_workoutDistanceUnitForIAPDistanceUnit:(NSInteger)arg1;
- (NSInteger)_workoutTypeForIAPWorkoutType:(NSInteger)arg1;
- (void)_registerAVSystemControllerNotifications;
- (void)_unregisterAVSystemControllerNotifications;
- (BOOL)skipNextEmpedSearch;
- (void)setSkipNextEmpedSearch:(BOOL)arg1;
- (NSInteger)calibrationType;
- (void)setCalibrationType:(NSInteger)arg1;
- (NSInteger)workoutPreset;
- (NSInteger)workoutType;
- (NSInteger)workoutState;
- (void)setWorkoutState:(NSInteger)arg1;

@end
