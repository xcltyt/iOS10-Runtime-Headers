/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class NSMapTable, FBApplicationProcess, NSHashTable, NSObject<OS_dispatch_queue>, BKSProcessAssertion, NSString;

@interface FBProcessManager : NSObject <FBApplicationProcessDelegate, FBApplicationProcessObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSHashTable *_observers;
    NSMapTable *_processesByPID;
    NSMapTable *_processesByBundleID;
    FBApplicationProcess *_systemAppProcess;
    BKSProcessAssertion *_systemAppProcessAssertion;
    FBApplicationProcess *_foregroundAppProcess;
    int _workspaceLocked;
    int _workspaceLockedToken;
}

@property(retain,readonly) FBApplicationProcess * systemApplicationProcess;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedInstance;

- (id)createApplicationProcessForBundleID:(id)arg1;
- (id)allProcesses;
- (void)_queue_notifyObserversUsingBlock:(id)arg1 completion:(id)arg2;
- (void)_queue_removeProcess:(id)arg1 withBundleID:(id)arg2 pid:(int)arg3;
- (id)_serviceClientAddedWithPID:(int)arg1 isUIApp:(bool)arg2 isExtension:(bool)arg3 bundleID:(id)arg4;
- (void)_queue_addProcess:(id)arg1 completion:(id)arg2;
- (id)createApplicationProcessForBundleID:(id)arg1 withExecutionContext:(id)arg2;
- (id)_queue_processForPID:(int)arg1;
- (id)processesForBundleIdentifier:(id)arg1;
- (id)_queue_processesForBundleIdentifier:(id)arg1;
- (void)_updateWorkspaceLockedState;
- (id)_serviceClientAddedWithAuditToken:(struct { unsigned int x1[8]; }*)arg1;
- (bool)_isWorkspaceLocked;
- (void)applicationProcessWillLaunch:(id)arg1;
- (id)_serviceClientAddedWithConnection:(id)arg1;
- (id)processForPID:(int)arg1;
- (void)noteProcessDidExit:(id)arg1;
- (void)noteProcess:(id)arg1 didUpdateState:(id)arg2;
- (id)applicationProcessForPID:(int)arg1;
- (id)_systemServiceClientAdded:(id)arg1;
- (id)allApplicationProcesses;
- (id)applicationProcessesForBundleIdentifier:(id)arg1;
- (id)systemApplicationProcess;
- (bool)ping;
- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dealloc;
- (id)description;

@end