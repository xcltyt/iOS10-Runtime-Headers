/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTunnel : NSObject {
    NSPConnectionInfo * _connectionInfo;
    NSDate * _connectionStartDate;
    <NPTunnelDelegate> * _delegate;
    NSMutableDictionary * _flows;
    bool  _isViable;
    bool  _persistMetrics;
    NSObject<OS_dispatch_queue> * _queue;
    NetworkServiceProxyConnectionStats * _stats;
    NSNumber * _telemetryRatio;
    NSString * _telemetryService;
    NSURL * _telemetryURL;
    double  _timeIntervalSinceLastUsage;
    double  _timeToFirstByte;
    double  _timeToFirstRequest;
}

@property (readonly) bool canHandleMoreData;
@property (retain) NSPConnectionInfo *connectionInfo;
@property (retain) NSDate *connectionStartDate;
@property (readonly) <NPTunnelDelegate> *delegate;
@property (readonly) NSMutableDictionary *flows;
@property (readonly) unsigned long long initialWindowSize;
@property (readonly) bool isConnectionAlive;
@property bool isViable;
@property bool persistMetrics;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain) NetworkServiceProxyConnectionStats *stats;
@property (retain) NSNumber *telemetryRatio;
@property (retain) NSString *telemetryService;
@property (retain) NSURL *telemetryURL;
@property (readonly) double timeIntervalSinceLastUsage;
@property double timeToFirstByte;
@property double timeToFirstRequest;

- (void).cxx_destruct;
- (void)acknowledgeData:(unsigned long long)arg1 sentToFlow:(id)arg2;
- (bool)addNewFlow:(id)arg1;
- (unsigned long long)allocateFlowID;
- (bool)canHandleMoreData;
- (void)closeFlow:(id)arg1 withError:(id)arg2;
- (id)connectionInfo;
- (id)connectionStartDate;
- (id)createConnectionInfo;
- (id)delegate;
- (id)directConnectionHostForFlow:(id)arg1;
- (id)directConnectionPortForFlow:(id)arg1;
- (id)flows;
- (void)handleCanHandleMoreData;
- (void)handleDisconnected;
- (void)handleFallbackForFlow:(id)arg1;
- (id)handleFlowClosed:(unsigned long long)arg1 withError:(id)arg2;
- (id)handleFlowClosed:(unsigned long long)arg1 withFallbackReason:(long long)arg2 withFrameError:(unsigned int)arg3;
- (void)handleFlowUsedTunnel;
- (void)increaseWindowSizeForFlow:(unsigned long long)arg1 byBytes:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1;
- (unsigned long long)initialWindowSize;
- (bool)isConnectionAlive;
- (bool)isViable;
- (unsigned long long)maxDataSendSizeForFlow:(id)arg1;
- (bool)persistMetrics;
- (id)queue;
- (id)recordFlowError:(id)arg1 withFallbackReason:(long long)arg2 withFrameError:(unsigned int)arg3;
- (void)removeFlow:(unsigned long long)arg1;
- (long long)sendData:(id)arg1 forFlow:(id)arg2 packetsSent:(long long*)arg3;
- (void)sendData:(id)arg1 toClientFlow:(unsigned long long)arg2;
- (void)setConnectionInfo:(id)arg1;
- (void)setConnectionStartDate:(id)arg1;
- (void)setFlowFallbackReason:(long long)arg1;
- (void)setFlowFallbackReason:(unsigned long long)arg1 withReason:(long long)arg2;
- (void)setIsViable:(bool)arg1;
- (void)setPersistMetrics:(bool)arg1;
- (void)setStats:(id)arg1;
- (void)setTelemetryRatio:(id)arg1;
- (void)setTelemetryService:(id)arg1;
- (void)setTelemetryURL:(id)arg1;
- (void)setTimeToFirstByte:(double)arg1;
- (void)setTimeToFirstRequest:(double)arg1;
- (bool)shouldTunnelFlow:(id)arg1;
- (void)start;
- (id)stats;
- (id)telemetryRatio;
- (id)telemetryService;
- (id)telemetryURL;
- (double)timeIntervalSinceLastUsage;
- (double)timeToFirstByte;
- (double)timeToFirstRequest;

@end
